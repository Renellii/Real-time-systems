/*
  Blink without Delay
*/


// for LED
int state1 = LOW;  
int state2 = LOW;
int state3 = LOW;
int state4 = LOW;

unsigned long previousMillis1 = 0;
unsigned long previousMillis2 = 0;
unsigned long previousMillis3 = 0;
unsigned long previousMillis4 = 0;

// to store last time LED updated

const long interval1 = 50;
const long interval2 = 100;
const long interval3 = 1000;
const long interval4 = 10000;  // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {

  unsigned long currentMicros = micros();

  if (currentMicros - previousMillis1 >= interval1) {
    // save the last time you blinked the LED
    previousMillis1 = currentMicros;

    // if the LED is off turn it on and vice-versa:
    if (state1 == LOW) {
      state1 = HIGH;
    } else {
      state1 = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(6, state1);
  }

  if (currentMicros - previousMillis2 >= interval2) {

    previousMillis2 = currentMicros;

 
    if (state2 == LOW) {
      state2 = HIGH;
    } else {
      state2 = LOW;
    }

 
    digitalWrite(5, state2);
  }
  
    if (currentMicros - previousMillis3 >= interval3) {

    previousMillis3 = currentMicros;

 
    if (state3 == LOW) {
      state3 = HIGH;
    } else {
      state3 = LOW;
    }

    digitalWrite(3, state3);
  }

  if (currentMicros - previousMillis4 >= interval4) {

    previousMillis4 = currentMicros;

 
    if (state4 == LOW) {
      state4 = HIGH;
    } else {
      state4 = LOW;
    }

    digitalWrite(9, state4);
  }

  }
}
