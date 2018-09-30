/* Blink LED da placa */

void setup() {

pinMode(D4, OUTPUT); /* Inicializa o LED da Placa como Saída */

}

void loop() {

digitalWrite(D4, LOW); /* LOW Aciona o LED. No ESP8266 o LED da placa recebe o positivo como comum */
delay(2000);
digitalWrite(D4, HIGH); /* HIGH apaga o LED */
delay(2000);

}
