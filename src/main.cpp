/*
*Autor: Denilson Gomes Vaz da Silva
*Graduando em Engenharia da Computação
*
*Codigo para gravação e reprodução de audio usando o modulo ISD1820
*Modulo encontrado no link:
https://www.arduinoecia.com.br/2014/08/modulo-gravador-de-voz-e-player-isd1820.html
*
*/

#include <Arduino.h>

//--Variaveis e Constantes
#define pino_rec 5
#define pino_playe 7

void setup() {
    pinMode(pino_rec, OUTPUT);
    pinMode(pino_playe, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    delay(5000);
    // Inicia a gravacao
    Serial.println("Iniciando a gravação");
    digitalWrite(pino_rec, HIGH);
    delay(10000);
    // Para a gravacao
    Serial.println("Encerrando a gravação");
    digitalWrite(pino_rec, LOW);
    // Aguarda 5 segundos
    delay(5000);
    // Inicial a reproducao
    Serial.println("Iniciando a reprodução");
    digitalWrite(pino_playe, HIGH);
    delay(100);
    Serial.println("Finalizando a reprodução");
    digitalWrite(pino_playe, LOW);
    // Aguarda 20 segundos e reinicia o processo
    delay(20000);
}