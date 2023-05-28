#include <IRremote.hpp>
IRrecv irrecv(11);
decode_results results;
void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  // put your setup code here, to run once:

}

void loop() {
  if(irrecv.decode(&results)){
    Serial.println(results.value);
    irrecv.resume();
  }
  // put your main code here, to run repeatedly:

}
