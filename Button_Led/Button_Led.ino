/* Push Button + LED da placa */

bool chave; /* condição para acender o LED */

void setup() {

pinMode(D1, INPUT_PULLUP); /* Inicializa o D1 como entrada PULL UP */
pinMode(D4, OUTPUT); /* Inicializa o LED da Placa como Saída */

}

void loop() {

chave = digitalRead(D1); /* Declarando a variável da chave*/

if (chave == HIGH)  {
digitalWrite(D4, LOW); /* LOW Aciona o LED. No ESP8266 o LED da placa recebe o positivo como comum */
} 

digitalWrite(D4, HIGH); /* HIGH apaga o LED */

}
