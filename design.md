# Design

O obejtivo desta etapa é apresentar a planta baixa da residência e a disposição dos componentes na mesma.

### Planta baixa da residência:

![](./figuras/NOVAplantabaixa.png)

Na tabela abaixo é listada a localização de cada sensor e atuador de acordo com a [Concepção do Projeto](./concepcao.md):

|  Componentes Eletrônicos                           | Cômodos     | Função |
| -------------------------------------------------- | ---------- | ------- |
| Sensor de Umidade e Temperatura DHT11 |      Cozinha   | Regulagem de temperatura da cozinha. |
| Sensor de presença e movimento PIR |      Área Externa (Porta da Frente)     | Irá auxiliar no processo de automatização do portão. |
| Sensor de gás MQ-2 inflamável e fumaça |      Cozinha     | Sistema de prevenção de acidente doméstico com gás de cozinha. |
| Micro Servo SG92R 9g TowerPro |     Portão da Garagem    | Motor do portão. |
| Módulo Sensor de Umidade/Nível Água Chuva |      Área Externa (Jardim)     | Irá auxiliar no processo de rega das plantas. |
| Sensor ultrasônico HC-SR04 |      Portão da Garagem       | Irá auxiliar no processo de automatização do portão. |
| Módulo Matriz de LED 8×8 com MAX7219 |      Cozinha    | Na matriz de LED será exibido a temperatura do ambiente, regulada para 23°C. |
| Buzzer passivo |      Sala     | O buzzer passivo irá simular uma campainha. |
| Display LCD 16×2 I2C Backlight Azul |      Sala     | O display irá exibir informações pertinentes dos sensores do sistema. |
| Cooler |      Cozinha     | Irá atuar como ventilador para regular a temperatura da cozinha e exaustor para o sistema de prevenção de acidente doméstico com gás de cozinha. |
| Mini Bomba D'água Submersiva |      Área Externa (Jardim)     | A mini bomba regará o jardim de acordo com o nível de umidade/chuva. |

### Esquemático:

![](./figuras/_sketch.png)

Caso queira olhar com detalhes, vá para [Sketch](./sketch/Sketch.pdf).
