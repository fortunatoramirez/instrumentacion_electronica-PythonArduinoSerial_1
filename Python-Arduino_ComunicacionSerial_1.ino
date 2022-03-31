char car;
String cad;
int cad_int; 

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {
  if(Serial.available())
  {
    //car = Serial.read();
    cad = Serial.readStringUntil('\n');

    if (cad=="ON")
    {
      digitalWrite(LED_BUILTIN, HIGH);
      digitalWrite(5, HIGH);
    }

    else if (cad=="OFF")
    {
      digitalWrite(LED_BUILTIN, LOW);
      digitalWrite(5, LOW);
    }

    Serial.print(cad);
  }

  delay(100);

}
