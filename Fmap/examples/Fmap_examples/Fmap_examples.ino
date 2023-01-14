#include <Fmap.h>

Fmap fmap;

float val=0.0;//map変換前の値
float val1;//map変換後の値
float in_min;//現在の範囲の最小値
float in_max;//現在の範囲の最大値
float out_min;//変換後の値の最小値
float out_max;//変換後の値の最大値

void setup() {
  // put your setup code here, to run once:
  //map関数の最小地と最大値の設定(数値は任意)
  Serial.begin(9600);
  in_min=0.0;
  in_max=1.0;
  out_min=0.0;
  out_max=360.0;

}

void loop() {
  // put your main code here, to run repeatedly:
  
  val1=fmap.map(val,in_min,in_max,out_min,out_max);//valをマップ関数で変換しval1へ代入
  Serial.println(val1,4);//val1の値を可視化
  delay(10);
  val += 0.001;//valに数値を追加
  if(val>=in_max){
    //valのリセット
    val=0.0;
    }
}
