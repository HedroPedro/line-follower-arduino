/*
  TODO: definir portas de saída
*/
#define PORTA_SUP_ESQ
#define PORTA_SUP_DIR
#define PORTA_INF_ESQ
#define PORTA_INF_DIR

void setup() {
  Serial1.begin(9600);
  Serial.begin(9600);
  Serial.println("Iniciando comunicação Bluetooth...");
}

void loop() {
  // Executa enquanto houver dados na porta do bluehooth
  // TODO: Verificar se while(true) impede problemas de bugs de conexão
  while (Serial1.available()) {

    String string = Serial1.readString();
    //TODO: Processar string ou alterar método para estados
    Serial.println(string);
    
    // Imprime a mensagem recebida no monitor serial
    Serial.print("Mensagem recebida: ");
    Serial.println(receivedMessage);*/

  }
  
}