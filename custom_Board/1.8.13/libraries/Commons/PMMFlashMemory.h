#include "ProjectDef.h"

#ifdef PMMFlashMemory
// Use 0-2. Larger for more debugging messages
#define FLASH_DEBUG       0
const int WRITTEN_SIGNATURE = 0xBEEFDEED;
const int START_ADDRESS     = 0;

SFE_SPI_FLASH FlashEPROM;

extern void PMMFlashWriteInt (int Address, int Value);
extern void PMMFlashWriteFloat (int Address, float Value);
extern void PMMFlashWriteLong (int Address, long Value);
extern void FlashWriteString (int Address, String Value);
extern int PMMFlashReadInt(int Address, int Value);
extern float PMMFlashReadFloat(int Address, float Value);
extern long PMMFlashReadFloat(int Address, long Value);
extern String PMMFlashReadFloat(int Address, String Value);

void PMMInitializeFlashEPROM(byte PIN_FLASH_CS){
    FlashEPROM.begin(PIN_FLASH_CS);
}

void PMMFlashWriteInt(int Address, int Value)
{
    FlashEPROM.put(Address, Value);
}

void PMMFlashWriteFloat (int Address, float Value)
{
    FlashEPROM.put(Address, Value);
}

void PMMFlashWriteLong (int Address, long Value)
{
    FlashEPROM.put(Address, Value);
}

void PMMFlashWriteString (int Address, String Value)
{
    FlashEPROM.put(Address, Value);
}

int PMMFlashReadInt(int Address, int Value)
{
    FlashEPROM.get(Address, Value);
}

float PMMFlashReadFloat(int Address, float Value)
{
    FlashEPROM.get(Address, Value);
}

long PMMFlashReadFloat(int Address, long Value)
{
    FlashEPROM.get(Address, Value);
}

String PMMFlashReadFloat(int Address, String Value)
{
    FlashEPROM.get(Address, Value);
}
#endif