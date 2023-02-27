#include "ProjectDef.h"

#ifdef PMMInternalRTC
RTCZero PMMRTC;

extern void PMMInternalRTCSetup();
extern void PMMInternalRTCSetUnixTime(int32_t UnixTime, float TimeZone);
extern uint32_t PMMInternalRTCGetUnixTime();
extern int16_t PMMInternalRTCGetDay();
extern int16_t PMMInternalRTCGetMonth();
extern int16_t PMMInternalRTCGetYear();
extern int16_t PMMInternalRTCGetHours();
extern int16_t PMMInternalRTCGetMinutes();
extern int16_t PMMInternalRTCGetSeconds();

void PMMInternalRTCSetup()
{
    rtc.begin();
}

void PMMInternalRTCSetUnixTime(int32_t UnixTime, float TimeZone)
{
rtc.setEpoch(UnixTime+(3600*TimeZone)); 
}

uint32_t PMMInternalRTCGetUnixTime()
{
    return rtc.getEpoch();
}

int16_t PMMInternalRTCGetDay()
{
return rtc.getDay();
}

int16_t PMMInternalRTCGetMonth()
{
return rtc.getMonth();
}

int16_t PMMInternalRTCGetYear()
{
return rtc.getYear()+2000;
}

int16_t PMMInternalRTCGetHours()
{
return rtc.getHours();
}

int16_t PMMInternalRTCGetMinutes()
{
return rtc.getMinutes();
}

int16_t PMMInternalRTCGetSeconds()
{
return rtc.getSeconds();
}



#endif