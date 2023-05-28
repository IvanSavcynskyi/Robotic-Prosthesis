#include <IRremote.hpp>
#include <Servo.h>
IRrecv irrecv(11);
decode_results results;
Servo servo;
void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  servo.attach(9);
}

void loop() {
  if(irrecv.decode(&results)){
    Serial.println(results.value);
    if(results.value == 16593103){
      servo.write(180);
    }
    if (results.value == 16582903){ 
       servo.write(140);
    }
    irrecv.resume();
  }
}
