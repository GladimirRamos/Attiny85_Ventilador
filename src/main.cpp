// • Primeiro teste 05.05.2021

#include <Arduino.h>

int STAT = 0;                                                // inicia em 0
const int LED1 = 1;

void setup(){
  pinMode(LED1, OUTPUT);                                     //Define o pino como saida
  digitalWrite(LED1, LOW);
}

void loop(){
  digitalWrite(LED1, STAT);
  STAT = !STAT;                                              //Inverte o estado do pino
  delay(250);                                                //Espera
}