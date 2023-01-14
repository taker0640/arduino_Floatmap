#include "arduino.h"
#ifndef Fmap_h 
#define Fmap_h

class Fmap{
    public:
     Fmap();
     float map(float x, float in_min, float in_max, float out_min, float out_max);

    private:
     float in_min;
     float in_max;
     float out_min;
     float out_max;
};

#endif