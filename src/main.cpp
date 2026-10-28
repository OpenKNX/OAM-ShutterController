#include "OpenKNX.h"
#include "ShutterControllerModule.h"
#include "Logic.h"
#ifdef ARDUINO_ARCH_RP2040
    #include "FileTransferModule.h"
#endif
#ifdef ARDUINO_ARCH_ESP32
    #include "FileTransferModule.h"
#endif
#include "FunctionBlocksModule.h"
#ifdef ARDUINO_ARCH_RP2040
    #pragma message "Pico Core Version: " ARDUINO_PICO_VERSION_STR
#endif
#if defined(KNX_IP_LAN) || defined(KNX_IP_WIFI)
    #include "NetworkModule.h"
    #include "InternetWeatherModule.h"
#endif

void setup()
{
    openknx.init();

#if defined(ARDUINO_ARCH_RP2040) || defined(ARDUINO_ARCH_ESP32)
#ifndef OPENKNX_FILE_TRANSFER_IGNORE
    openknx.addModule(9, openknxFileTransferModule);
#endif
#endif

    openknx.addModule(1, openknxLogic);
    openknx.addModule(2, openknxFunctionBlocksModule);
    openknx.addModule(3, openknxShutterControllerModule);
#if defined(KNX_IP_LAN) || defined(KNX_IP_WIFI)
    openknx.addModule(4, openknxNetwork);
    openknx.addModule(5, openknxInternetWeatherModule);
#else
    openknx.unsupportedEtsModule(ETS_ModuleId_NET);
    openknx.unsupportedEtsModule(ETS_ModuleId_IW);;
#endif
    openknx.setup();
}
  
void loop()
{
   openknx.loop();
}

#ifdef OPENKNX_DUALCORE
void setup1()
{
    openknx.setup1();
}

void loop1()
{
    openknx.loop1();
}
#endif
