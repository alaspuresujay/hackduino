//we have button attahced on A0 to A3
//LEDs are attached at 10 to 13

// constants won't change. They're used here to set pin numbers:
const int buttonPin = A0;     // the number of the pushbutton pin
const int buttonPin1 = A1;
const int buttonPin2 = A2;
const int buttonPin3 = A3;
const int ledPin =  13;      // the number of the LED pin
const int ledPin1 =  12;
const int ledPin2 =  11;
const int ledPin3 =  10;

// variables will change:
int buttonState = 0; 
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;// variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
    pinMode(ledPin1, OUTPUT);
      pinMode(ledPin2, OUTPUT);
        pinMode(ledPin3, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
    pinMode(buttonPin1, INPUT);
      pinMode(buttonPin2, INPUT);
        pinMode(buttonPin3, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:

  (buttonState == HIGH)?digitalWrite(ledPin, HIGH):digitalWrite(ledPin, LOW);
    (buttonState1 == HIGH)?digitalWrite(ledPin1, HIGH):digitalWrite(ledPin1, LOW);
      (buttonState2 == HIGH)?digitalWrite(ledPin2, HIGH):digitalWrite(ledPin2, LOW);
        (buttonState3 == HIGH)?digitalWrite(ledPin3, HIGH):digitalWrite(ledPin3, LOW);
  

}
