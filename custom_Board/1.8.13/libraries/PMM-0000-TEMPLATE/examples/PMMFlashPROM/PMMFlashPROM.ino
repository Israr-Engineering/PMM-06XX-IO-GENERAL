
#include <ProjectDef.h>

const byte PIN_FLASH_CS = 8; // Change this to match the Chip Select pin on your board


void setup() {

  Scheduler.startLoop(PMMConfiguration);
  Scheduler.startLoop(PMMCommunication);

}
 
void loop() {
 
}

void PMMConfiguration() {
  
}

void PMMCommunication() {

  // We must call 'yield' at a regular basis to pass

  // control to other tasks.

  yield();
}
