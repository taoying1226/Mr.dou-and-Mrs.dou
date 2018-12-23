void setup() 
{
  Serial.begin(9600);
}

void loop() {
	int sensorValue0 = analogRead(A0);
	int sensorValue1 = analogRead(A1);

	float voltage0 =  sensorValue0  * (5.0 / 1023.0);
	float voltage1 =  sensorValue1  * (5.0 / 1023.0);

	Serial.println(String(voltage0) + ";" + String(voltage1));
	delay(100);
	Serial.flush();
}
