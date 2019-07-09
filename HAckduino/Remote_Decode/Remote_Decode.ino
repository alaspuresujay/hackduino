#include <IRremote.h>
#define but0 33480735
#define but1 33444015
#define but2 33478695
#define but3 33486855
#define but4 33435855
#define but5 33468495
#define but6 33452175
#define but7 33423615
#define but8 33484815
#define but9 33462375
#define eq 33431775
#define pwr 33441975
#define play 33456255
int IRpin = A5;
IRrecv irrecv(IRpin);
decode_results results;
int led1=10, led2=11, led3=12, led4=13, buz=9;
int i1=0, i2=0,i3=0, i4=0, i5=0, ipwr=0;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
    pinMode(led1,OUTPUT);
    pinMode(led2,OUTPUT);
    pinMode(led3,OUTPUT);
    pinMode(led4,OUTPUT);
    pinMode(buz,OUTPUT);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(buz, LOW);
}
void loop()
{
  if (irrecv.decode(&results))
  {
    delay(100);
//    Serial.println(results.value); // Print the Serial 'results.value'
    
    switch (results.value)
  {
    case but1:
      if (i1 == 0) {
        digitalWrite(led1, 1);
        Serial.println("led1 on");
        i1 = 1;
      }
      else if (i1 == 1) {
        digitalWrite(led1, 0);
        Serial.println("led1 off");
        i1 = 0;
      }
      break; // Button 1

    case but2:
      if (i2 == 0) {
        digitalWrite(led2, 1);
        Serial.println("led2 on");
        i2 = 1;
      }
      else if (i2 == 1) {
        digitalWrite(led2, 0);
        Serial.println("led2 off");
        i2 = 0;
      } break; // Button 2

    case but3:   if (i3 == 0) {
        digitalWrite(led3, 1);
        Serial.println("led3 on");
        i3 = 1;
      }
      else if (i3 == 1) {
        digitalWrite(led3, 0);
        Serial.println("led3 off");
        i3 = 0;
      } break; // Button 3

    case but4:   if (i4 == 0) {
        digitalWrite(led4, 1);
        Serial.println("led4 on");
        i4 = 1;
      }
      else if (i4 == 1) {
        digitalWrite(led4, 0);
        Serial.println("led4 off");
        i4 = 0;
      } break; // Button 4

          case but5:   if (i5 == 0) {
        digitalWrite(buz, 1);
        Serial.println("buzzer on");
        i5 = 1;
      }
      else if (i5 == 1) {
        digitalWrite(buz, 0);
        Serial.println("buzzer off");
        i5 = 0;
      } break; // Button 4

      case pwr:   if (ipwr == 0) {
              digitalWrite(led1, 1);
    digitalWrite(led2, 1);
    digitalWrite(led3, 1);
    digitalWrite(led4, 1);
    Serial.println("All LED ON");
          ipwr = 1;
        }
        else if (ipwr == 1) {
              digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    Serial.println("All LED OFF");
          ipwr = 0;
        }break; // Button 0

  }
    irrecv.resume();   // Receive the next value
  }

  
}
