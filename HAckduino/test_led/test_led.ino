void setup() {
  // put your setup code here, to run once:
pinMode(13,1);
pinMode(12,1);
pinMode(11,1);
pinMode(10,1);

}
int time=100;
void loop() {
  // put your main code here, to run repeatedly:
	digitalWrite(13, HIGH);
	delay(time);
	digitalWrite(12, HIGH);
	delay(time);
	digitalWrite(11, HIGH);
	delay(time);
	digitalWrite(10, HIGH);
	delay(time);
	digitalWrite(13, LOW);	
	delay(time);
	digitalWrite(12, LOW);
	delay(time);
	digitalWrite(11, LOW);
	delay(time);
	digitalWrite(10, LOW);
	delay(time);


}
