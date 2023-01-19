#include <Arduino.h>
#include <ESP8266WiFi.h>
#include "variables.h"

byte  cont = 0;
byte  max_intentos = 10;

void connectionWifi(){
    WiFi.begin(ssid,password);
    while (WiFi.status()!=WL_CONNECTED and cont < max_intentos ){
        delay(500);
        Serial.println("Esperando para conectar");
        cont++;

    }
    Serial.print("");
    if (cont<max_intentos){
        Serial.println("*************************");
        Serial.println("Conectado a la red Wif: ");
        Serial.println(WiFi.SSID());
        Serial.println("IP: ");
        Serial.println(WiFi.localIP());
        Serial.println("macAdrress: ");
        Serial.println(WiFi.macAddress());
        Serial.println("*************************");
    }
    else{
        Serial.println("*************************");
        Serial.println("error de conexiòn");
        Serial.println("*************************");
    }
}



