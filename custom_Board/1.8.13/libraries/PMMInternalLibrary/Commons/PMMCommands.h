#include "ProjectDef.h"

#ifdef PMMCommands

#include "InternalRTC.h"

extern string PMMCommnads(string readData);
extern string PMMGetUSBConfigurationSettings();
extern string PMMIsAlive();
extern void PMMSetUSBConfigurationSettings();
extern DateTime PMMGetRTCNOW();
extern uint32_t PMMGetRTCUNIXTime();
extern string ConvertUint32_tTostring(uint32_t number);
extern string DateTimeToString(uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t min, uint8_t sec);
extern void PMMSetRTCUNIXTime(uint32_t unixTime);
extern uint32_t GetUnixDateTimeNow();
extern string CheckAvailabeHardware();

string PMMCommnads(string readData)
{
    string result = "";
    if (readData == "PMMSetUSBConfigurationSettings")
    {
        PMMSetUSBConfigurationSettings();
        result = "PMMSetUSBConfigurationSettings";
    }
    else if (readData == "PMMGetUSBConfigurationSettings")
    {
        result = PMMGetUSBConfigurationSettings();
    }
    else if (readData == "PMMUSBConfiguration")
    {
        result = PMMIsAlive();
    }
    else if (readData == "RTC")
    {
        DateTime RTCNow = PMMGetRTCNOW();
        result = DateTimeToString(RTCNow.year(), RTCNow.month(), RTCNow.day(), RTCNow.hour(), RTCNow.minute(), RTCNow.second());
    }
    else if (readData == "RTCUNIX")
    {
        result = ConvertUint32_tTostring(PMMGetRTCUNIXTime());
    }
    else if (readData == "SetRTCUNIX")
    {
        PMMSetRTCUNIXTime(GetUnixDateTimeNow());
    }
    else if (readData == "CheckHardware")
    {
        CheckAvailabeHardware();
    }

    return result;
}

#endif