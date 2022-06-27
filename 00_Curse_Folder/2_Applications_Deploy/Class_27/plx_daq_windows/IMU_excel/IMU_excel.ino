#include <Arduino_LSM9DS1.h>

#define CONVERT_G_TO_MS2 9.80665f
#define FREQUENCY_HZ 50
#define INTERVAL_MS (1000/ (FREQUENCY_HZ + 1))


void setup() {
  Serial.begin(9600);
  while (!Serial)
  {
      // do nothing
  } ;
  //limpa todos os dados do sheet incluindo os labels
  Serial.println("CLEARSHEET");
  Serial.println("CLEARDATA");
  //delay para dar o tempo suficiente para excluir os labels originais a fim de substituí-los
  delay(300);
  //escrevendo os nomes das colunas da planilha. É sempre necessário escrever o nome LABEL com o objetivo de sinalizar de que se quer nomear as colunas.
  //Após isso, basta colocar os nomes das colunas, sempre separando-as por vírgulas.
  //O nome "timestamp" para representar o horário pelo qual foram adicionados os dados é escolhido pensando na possibilidade de subir esses dados no EdgeImpulse.
  Serial.println("LABEL,timestamp,X,Y,Z");

  if (!IMU.begin()) {
    Serial.println("Failed to initialize IMU");
    while (1);
  }
}

void loop() {
  static unsigned long last_interval_ms = 0;
  float x,y,z;
  if (millis() > last_interval_ms + INTERVAL_MS) {
    last_interval_ms = millis();
    IMU.readAcceleration(x,y,z);
    x = x * CONVERT_G_TO_MS2;
    y = y * CONVERT_G_TO_MS2;
    z = z * CONVERT_G_TO_MS2;
    //escrevendo os dados na planilha:
    //É necessário sempre começar colocando a palavra DATA a fim de sinalizar de que se quer adicionar dados na planilha;
    //Após isso coloca-se a palavra TIME com o objetivo de adicionar o horário em que se adicionou os dados.
    //Depois, é colocado na serial os dados dos eixos do IMU. Para fazer o preenchimento correto dos dados nas suas respectivas 
    //colunas é necessário fazer o Serial.print da variável e em seguida realizar um outro Serial.print de uma vírgula. 
    //Essa pontuação é a forma pela qual o plugin identifica que há outra variável para ser adicionada na planilha. 
    //Apenas a última variável é que se precisa colocar Serial.println, a fim de mostrar que ela é a última variável disponível em questão.
    Serial.print("DATA,TIME,");
    Serial.print(x);
    Serial.print(",");
    Serial.print(y);
    Serial.print(",");
    Serial.println(z);
  }
}
