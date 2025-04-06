
#define PUSHBUTTON  2  
#define LED 8   

// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(PUSHBUTTON, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(PUSHBUTTON);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
