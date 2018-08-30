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
#define pino_rec 2
#define pino_playe 3

void setup() {
    pinMode(pino_rec, OUTPUT); //pino_rec como saida
    pinMode(pino_playe, OUTPUT); //pino_playe como saida
    Serial.begin(9600); //Inicia monitor serial
}

void loop() {
    delay(5000); // Aguarda 5 segundos
    Serial.println("Iniciando a gravação"); // Exibe a mensagem
    digitalWrite(pino_rec, HIGH); // Inicia a gravacao
    delay(10000); // Aguarda 10 segundos
    Serial.println("Encerrando a gravação"); // Exibe a mensagem
    digitalWrite(pino_rec, LOW); // Para a gravacao

    delay(5000); // Aguarda 5 segundos

    // Inicial a reproducao
    Serial.println("Iniciando a reprodução"); // Exibe a mensagem
    digitalWrite(pino_playe, HIGH); // Inicia a reprodução
    delay(1000); //Espera 1 segundo
    Serial.println("Finalizando a reprodução"); // Exibe a mensagem
    digitalWrite(pino_playe, LOW); // Para a reproducao
    delay(20000); // Aguarda 20 segundos e reinicia o processo
}