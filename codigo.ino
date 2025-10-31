int sensorState = 0; // Variável para armazenar o estado do sensor

void setup() {
  pinMode(2, INPUT);  // Define o pino 2 como entrada (onde o sensor estará conectado)
  pinMode(13, OUTPUT); // Define o pino 13 como saída (onde o LED estará conectado)
  Serial.begin(9600);  // Inicializa a comunicação serial a 9600 bps (bits por segundo)
}

void loop() {
  // Ler o estado do sensor/entrada digital (pino 2)
  // Se o sensor estiver ativado, o valor será HIGH; caso contrário, será LOW.
  sensorState = digitalRead(2);

  // Verificar se o pino do sensor está HIGH (sensor ativado)
  if (sensorState == HIGH) {
    digitalWrite(13, HIGH);   // Liga o LED (pino 13)
    delay(5000);              // Mantém o LED ligado por 5 segundos
    Serial.println("Sensor ativado!");  // Envia uma mensagem para o monitor serial
  } else {
    digitalWrite(13, LOW);    // Desliga o LED (pino 13) se o sensor não estiver ativado
  }

  delay(10);  // Pequeno atraso de 10 ms para evitar leituras muito rápidas do sensor
}
