#ifndef LEDMANAGER_H
#define LEDMANAGER_H

#include "Arduino.h"


#define MODE_PATTERN_MAX    10

#define BLINK_1     {2,2,0}
#define BLINK_2     {10,2,0}

class LEDManager {

public:
    LEDManager(uint8_t pin);

    void loop();
    void setMode(const std::initializer_list<uint16_t>& modePattern);


private:
    uint8_t             pin;
    uint16_t            modePattern[MODE_PATTERN_MAX +1] = {};
    uint32_t            modeStep    = 0;
    uint32_t            modeCounter = 0;
   
};


#endif // LEDMANAGER_H