int digitalPin = 7; // Pin de salida digital del sensor
int analogValue;
int digitalValue;

void setup() {
  Serial.begin(9600); // Inicializa la comunicación serial
  pinMode(digitalPin, INPUT); // Configura el pin digital como entrada
}

void loop() {
  analogValue = analogRead(analogPin);  // Lee el valor analógico
  digitalValue = digitalRead(digitalPin);  // Lee el valor digital

  Serial.print("Valor analógico: ");
  Serial.println(analogValue);

  Serial.print("Valor digital: ");
  Serial.println(digitalValue);

  delay(1000); // Espera un segundo entre lecturas
}
