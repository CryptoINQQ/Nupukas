#include "Arduino.h"
#include <Wire.h>
#include <PCF8575.h>

PCF8575 PCF8575;

void idle_state(int* bitfield); //called until game hasnt started yet
in