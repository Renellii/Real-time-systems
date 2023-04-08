#include <TaskManagerIO.h>

int state0 = LOW;  
int state1 = LOW;
int state2 = LOW;
int state3 = LOW;

void setup() {
  // set the digital pin as output:
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
}

const long interval0 = 50;
const long interval1 = 100;
const long interval2 = 1000;
const long interval3 = 10000;

  taskid_t taskpin3 = taskManager.scheduleFixedRate(interval0, [] {
    if (state0 == LOW) {
      state0 = HIGH;
    }
    else {
      state0 = LOW;
    }

    digitalWrite(3, state0);
  }, TIME_MICROS);

   taskid_t taskpin5 = taskManager.scheduleFixedRate(interval1, [] {
    if (state1 == LOW) {
      state1 = HIGH;
    }
    else {
      state1 = LOW;
    }

    digitalWrite(5, state1);
  }, TIME_MICROS);

    taskid_t taskpin6 = taskManager.scheduleFixedRate(interval2, [] {
    if (state2 == LOW) {
      state2 = HIGH;
    }
    else {
      state2 = LOW;
    }

    digitalWrite(6, state2);
  }, TIME_MICROS);

    taskid_t taskpin9 = taskManager.scheduleFixedRate(interval3, [] {
    if (state3 == LOW) {
      state3 = HIGH;
    }
    else {
      state3 = LOW;
    }

    digitalWrite(9, state3);
  }, TIME_MICROS);


void loop() {
  taskManager.runLoop();
}
