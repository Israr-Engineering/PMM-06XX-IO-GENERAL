#pragma region INCLUDES

// 01. Includes
// #include <Arduino.h>
#include <iostream>
#include <string>
#include <String>
#include <array>
#include <cstdlib>
#include <chrono>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <sstream>
// #include <corecrt_math_defines.h>
#include <random>
// #include <api>
// #include <boost/date_time/gregorian/gregorian.hpp>
#include <Scheduler.h>
#include <Wire.h>
#include <SparkFun_External_EEPROM.h>
#include <SPI.h>
#include <Ethernet.h>
#include <DS3231.h>
#include <RTCZero.h>
#include <ArduinoRS485.h>
#include <ArduinoModbus.h>
#include <Modbus.h>
#include <ModbusSerial.h>
#include <EthernetUdp.h>
#include <PID_v1.h>
//#include <EEPROM.h>
#include <SparkFun_SPI_SerialFlash.h>
#include <HTTPRequest-master/include/HTTPRequest.h>
#include <I2Cdevlib-MPU6050/MPU6050_6Axis_MotionApps612.h>
#include <Adafruit BNO055/Adafruit_BNO055.h>
#include <Adafruit BNO055/utility/imumaths.h>

// 02. Using
using namespace std;
using std::basic_string;
using std::char_traits;

#pragma endregion

#pragma region DEFINE

// PMMTypes
#define PMMTypes
// PMMCommands
#define PMMCommands
// PMMGlobalFunctions
#define PMMGlobalFunctions

// External  RTC
#define PMMExternalRTC
// Internal RTC
#define PMMInternalRTC
// ModbusRTUServer
#define PMMModbusRTUServer
// ModbusLightRTUServer
#define PMMModbusLightRTUServer
// ModbusRTUClient
#define PMMModbusRTUClient
// ModbusTCPServer
#define PMMModbusTCPServer
// Sun Calculations
#define PMMSunCalculations
// EEPROM
#define PMMEEPROM
// Flash Memory
#define PMMFlashMemory
// UDP
#define PMMUDP
/// MPU
#define PMMMPU
// BNO
#define PMMBNO

//I2C 
#define PMMI2C


#pragma endregion

#pragma region VARIABLES

typedef bool bit;

#pragma endregion