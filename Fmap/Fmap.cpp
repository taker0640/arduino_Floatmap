#include "Arduino.h"
#include "Fmap.h"

Fmap::Fmap(){
    
}

float Fmap::map(float x, float in_min, float in_max, float out_min, float out_max){
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
    //基準値,現在の範囲の下限,上限,返還後の範囲の上限,下限をfloat型で入力する。
}