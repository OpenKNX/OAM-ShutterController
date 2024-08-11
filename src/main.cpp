#include "OpenKNX.h"
#include "ShutterControllerModule.h"
#include "Logic.h"
#ifdef ARDUINO_ARCH_RP2040
    #include "FileTransferModule.h"
    #include "UsbExchangeModule.h"
    #if defined(KNX_IP_W5500) || defined(KNX_IP_GENERIC) || defined(KNX_IP_WIFI)
        #include "NetworkModule.h"
    #endif
#endif
#ifdef ARDUINO_ARCH_RP2040
    #pragma message "Pico Core Version: " ARDUINO_PICO_VERSION_STR
#endif

void setup()
{
    // change this also in library.json
    const uint8_t firmwareRevision = 1;
    openknx.init(firmwareRevision);
 #ifdef ARDUINO_ARCH_RP2040
    openknx.addModule(9, openknxFileTransferModule);
    openknx.addModule(8, openknxUsbExchangeModule);
    #if defined(KNX_IP_W5500) || defined(KNX_IP_GENERIC) || defined(KNX_IP_WIFI)
    openknx.addModule(7, openknxNetwork);
    #endif
#endif
    openknx.addModule(2, openknxShutterControllerModule);
    openknx.addModule(1, openknxLogic);
    openknx.setup();

    Serial.printf("OpenKNX flash size: %lu\r\n", (unsigned long) openknx.openknxFlash.size());
}

#ifdef tskKERNEL_VERSION_NUMBER
  
void loop()
{
    openknx.loop();
}
#endif

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
