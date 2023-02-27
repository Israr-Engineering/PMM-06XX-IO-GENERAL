#include "ProjectDef.h"

#ifdef PMMEEPROM

ExternalEEPROM PMMEprom;

extern void EEpromSetup();
extern int16_t GetDataFromEEprom(int16_t Address);
extern void PutDataToEEprom(int16_t Address, int16_t Value);

void EEpromSetup()
{
    Wire.begin();
    PMMEprom.begin();
}

int16_t GetDataFromEEprom(int16_t Address)
{
    String Value;
    return PMMEprom.get(Address, Value);
    return Value;
}

void PutDataToEEprom(int16_t Address, int16_t Value)
{
    PMMEprom.put(Address, Value);
}


#endif