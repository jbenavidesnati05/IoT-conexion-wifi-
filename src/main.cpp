#include <Arduino.h>
#include "Build.h"



void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
Serial.print("\n");
connectionWifi();
}

void loop() {
  // put your main code here, to run repeatedly:
}
