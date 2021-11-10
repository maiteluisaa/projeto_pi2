# Concepção do Projeto

O projeto consiste na construção de um sistema residencial automatizado. Utilizando tecnologias de baixo custo, buscando a acessibilidade à maior parte da população. O projeto busca realizar o controle de acesso à residência, controle de irrigação do jardim, controle de temperatura da sala de estar e apresentar os dados de maneira simples para o usuário.

### Requisitos:

1. Realizar o controle de acesso à residência, utilizando o sensor ultrasônico HC-SR04 e o sensor de presença PIR para identificar a presença de carros e pessoas, o buzzer será utilizado como campainha.

![](./figuras/fluxograma_areaexterna.png)

2. Realizar o controle de irrigação do jardim, utilizando o sensor de umidade / nível da água da chuva para monitorar o solo. Quando o solo estiver seco acionar a válvula solenóide.

![](./figuras/fluxograma_jardim.png)

3. Realizar um sistema de prevenção a acidentes com gás de cozinha, utilizando o sensor de gás MQ-2. Quando o nível de gás ultrapassar o nível aceitável acionar o exaustor, desligando o mesmo somente quando o nível voltar ao normal.

![](./figuras/fluxograma_cozinha.png)

4. Apresentar os dados dos sensores no LCD.

5. Utilizar o sensor de temperatura na sala de estar para acionar o ventilador, deixando a temperatura do ambiente sempre em 26 °C. Exibir o valor da temperatura na matriz de LED. 

6. Realizar todos os controles de maneira remota.

### Tecnologias do Projeto:

|  Componentes Eletrônicos                           | Quantidade |
| -------------------------------------------------- | ---------- |
| Placa MEGA 2560 R3 + Fonte + Cabo USB para Arduino |      1     |
| Sensor de Umidade e Temperatura DHT11 |      1     |
| Sensor de presença e movimento PIR |      1     |
| Sensor de gás MQ-2 inflamável e fumaça |      1     |
| Micro Servo SG92R 9g TowerPro |      1     |
| Módulo Sensor de Umidade/Nível Água Chuva |      1     |
| Módulo Relé 5 V e um Canal |      2     |
| Sensor ultrasônico HC-SR04 |      1     |
| Módulo Matriz de LED 8×8 com MAX7219 |      1     |
| Buzzer passivo |      1     |
| Display LCD 16×2 I2C Backlight Azul |      1     |
| Cooler |      2     |
| Válvula solenóide ou Mini Bomba D'água Submersiva |      1     |




