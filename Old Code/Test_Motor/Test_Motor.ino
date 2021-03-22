#include <Servo.h>

Servo ESC;     // create servo object to control the ESC

int throttle = 0;

void setup() {

  // Attach the ESC on pin 9
  ESC.attach(9,1000,2000); // (pin, min pulse width, max pulse width in microseconds) 

}

void loop() {
  throttle = 100;
  throttle = map(throttle,0,1023,0,179);
  ESC.write(throttle)
}
