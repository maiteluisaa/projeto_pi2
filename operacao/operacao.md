# Operação

Tanto nesta etapa do projeto quanto na etapa de implementação, percebeu-se que alguns objetivos do projeto não eram realizáveis. Desta maneira, algumas alterações foram realizadas:

- O sistema de irrigação não foi realizado pois o sensor DHT11 não é próprio para isso. O sensor YL-69 foi adquirido para realizar esta função em projetos futuros.

# Funções Implementadas

- Sistema de Detecção de Gás: O sensor MQ-2 foi utilizado para medir o gás, exibe-se "A" (alto), "M" (médio) e "B" (baixo) na matriz de LEDs conforme a medida do sensor. Quando chega-se no nível alto, o exaustor é acionado, sendo desligado somente quando o nível de gás descer para "M" (médio).

- Controle de Acesso: Quando detectado um carro/pessoa a uma distância de x cm, a campainha (buzzer) é acionada e espera-se um comando para abrir ou não o portão. Caso deseja-se que o portão seja aberto, depois que ele abre, espera-se um comando para fecha-lo.

- Leitura da umidade e temperatura do ambiente, mostrando os dados no LCD.

- Quando detectada presença na porta da frente, a campainha é acionada (buzzer).

![](./figuras/maquete.png)

![](./figuras/maquetee.png)

![](./figuras/jardim.png)
