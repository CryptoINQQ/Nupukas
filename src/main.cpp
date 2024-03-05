#include <Arduino.h>
#include <game.h>

static constexpr BRATE =115200
static constexpr 


int bitfield_LED = 0x00000000;

void setup() {
  Serial.begin(115200);
  

}


void loop() {

if(start_game){
  game();
} else {
  idle_state();
}
}

