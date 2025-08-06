#include "DHT.h"
#define DHTPIN 32
#define DHTTYPE DHT11  
#define SOILPIN 33
#define MOTOR 25
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  pinMode(SOILPIN, INPUT);
  pinMode(MOTOR, OUTPUT);
  dht.begin();
}
void loop() {
  delay(1000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);

  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print(f);
  Serial.print(" *F\t");
  Serial.print("Soil: ");
  int soil = analogRead(SOILPIN);
  Serial.println(soil);
  
  if (soil < 4000) {
    digitalWrite(MOTOR, LOW);
  } else {
    digitalWrite(MOTOR, HIGH);
  }
}