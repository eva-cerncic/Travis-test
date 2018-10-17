#include "Travis-test.h"

Travis_test test;
int res = 0;

void setup() {
  Serial.begin(115200);
  delay(2000);
}

void loop() {
  res = test.calculate();
  Serial.println(res);
  delay(1000);
}
