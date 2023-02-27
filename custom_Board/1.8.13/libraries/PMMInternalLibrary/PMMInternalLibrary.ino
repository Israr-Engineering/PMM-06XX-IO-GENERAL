#include "Commons/ProjectDef.h"
//#include "Commons/PMMEEProm.h"
#include "Commons/PMMEEProm.h"
#include"Wire.h"
#define x

template <typename T> T myData;
void PrintData(x)
{
  int xy =myData;
SerialUSB.println(xy);
}

void setup()
{
SerialUSB.begin(9600);
EEpromSetup();

}

void loop() {
PrintData(10);
}
