int state0 = LOW;  
int state1 = LOW;  
int state2 = LOW;  
int state3 = LOW;  

const long delay0 = 50; 
const long delay1 = 100; 
const long delay2 = 1000; 
const long delay3 = 10000; 

unsigned long millis0 = 0;  
unsigned long millis1 = 0;  
unsigned long millis2 = 0; 
unsigned long millis3 = 0;  
 

void setup() {
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
}


void loop() {

  unsigned long current_m = micros();

  if (current_m - millis0 >= delay0) {
    millis0 = current_m;
    if (state0 == LOW) {
      state0 = HIGH;
    } else {
      state0 = LOW;
    }
    digitalWrite(6, state0);
  } 


  if (current_m - millis1 >= delay1) {
    millis1 = current_m;
    if (state1 == LOW) {
      state1 = HIGH;
    } else {
      state1 = LOW;
    }
    digitalWrite(5, state1);
  }

  if (current_m - millis2 >= delay2) {
    millis2 = current_m;
    if (state2 == LOW) {
      state2 = HIGH;
    } else {
      state2 = LOW;
    }
    digitalWrite(3, state2);
  }

  if (current_m - millis3 >= delay3) {
    millis3 = current_m;
    if (state3 == LOW) {
      state3 = HIGH;
    } else {
      state3 = LOW;
    }
    digitalWrite(9, state3);
  }
}
