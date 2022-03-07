#include "DHT.h"
#include "LedControl.h"
#include <Wire.h> //INCLUSÃO DE BIBLIOTECA
#include <LiquidCrystal_I2C.h> //INCLUSÃO DE BIBLIOTECA
 
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE); //ENDEREÇO DO I2C E DEMAIS INFORMAÇÕES

//#define MINIBOMBA 52
//#define WATERPIN A1
#define DHTPIN A2 // Sinal
#define MQ2 A0 // PINO DO SENSOR MQ2
#define FAN 50 // RELÉ DO VENTILADOR

#define DHTTYPE DHT11 // DHT 11

LedControl lc = LedControl(48,44,46,1);

DHT dht(DHTPIN, DHTTYPE);

byte LetraA[8] = {
  B00011000,
  B00100100,
  B01000010,
  B01000010,
  B01111110,
  B01000010,
  B01000010,
  B01000010
};

byte LetraB[8] = {
  B01111000,
  B01000100,
  B01000100,
  B01111000,
  B01000100,
  B01000100,
  B01000100,
  B01111000
};

byte LetraM[8] = {
  B01000010,
  B01100110,
  B01011010,
  B01011010,
  B01000010,
  B01000010,
  B01000010,
  B01000010
};


int mq2 = 300;

float h = 0;
float t = 0;

void setup() {
  // put your setup code here, to run once:
  dht.begin();
  lc.shutdown(0,false);
  lc.setIntensity(0,1);
  lc.clearDisplay(0);
  pinMode(MQ2, INPUT);
  pinMode(FAN, OUTPUT);
  //pinMode(MINIBOMBA, OUTPUT);
  lcd.begin (16,2); //SETA A QUANTIDADE DE COLUNAS(16) E O NÚMERO DE LINHAS(2) DO DISPLAY
  lcd.setBacklight(HIGH); //LIGA O BACKLIGHT (LUZ DE FUNDO)
}

void loop() {
  // put your main code here, to run repeatedly:
  int mq2 = analogRead(MQ2);
  GasDetector(mq2);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  mostrar_LCD (h, t);
  //Regar(h);
}

// Funções

void display_A() {
  for(int i=0;i<8;i++) {
    lc.setRow(0,i,LetraA[i]);
  }
}

void display_B() {
  for(int i=0;i<8;i++) {
    lc.setRow(0,i,LetraB[i]);
  }
}

void display_M() {
  for(int i=0;i<8;i++) {
    lc.setRow(0,i,LetraM[i]);
  }
}

void GasDetector(int mq2){ // Função de detecção de gás
if(mq2 > 180 and mq2 <= 280){
  display_M();
}

if(mq2 <= 180){
  display_B();
}

if(mq2 > 280){
  display_A();

  while(mq2 > 280){
    digitalWrite(FAN, HIGH);
  }
  digitalWrite(FAN, LOW);
  }
}

void mostrar_LCD (float umidade, float temperatura){

  lcd.setCursor(0,0); //SETA A POSIÇÃO DO CURSOR
  lcd.print("T = "); //IMPRIME O TEXTO NO DISPLAY LCD
  lcd.print(temperatura); //IMPRIME O TEXTO NO DISPLAY LCD
  lcd.print("C");
  lcd.setCursor(0,1); //SETA A POSIÇÃO DO CURSOR
  lcd.print("U = "); //IMPRIME O TEXTO NO DISPLAY LCD
  lcd.print(umidade); //IMPRIME O TEXTO NO DISPLAY LCD
  lcd.print("%");
  delay(10);
}

/*void Regar (float umidade){
  if (umidade >= 30.00){
    digitalWrite(MINIBOMBA, HIGH);
    delay(10);
  }
  else{
    digitalWrite(MINIBOMBA,LOW);
  }
}
*/
