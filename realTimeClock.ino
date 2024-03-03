#include <virtuabotixRTC.h>

virtuabotixRTC myRTC(6, 7, 8);
void setup()
{
  Serial.begin(9600);
  // put your setup code here, to run once:
  // myRTC.initRTC(6, 7, 8);
  myRTC.setDS1302Time(00, 49, 14, 5, 22, 12, 2023);
}

void loop()
{
  myRTC.updateTime();
  // put your main code here, to run repeatedly:
  Serial.print("Current date: ");
  Serial.print(myRTC.year);
  Serial.print("-");
  Serial.print(myRTC.month);
  Serial.print("-");
  Serial.print(myRTC.dayofmonth);
  Serial.print(" ");

  Serial.print("Current time: ");
  Serial.print(myRTC.hours);
  Serial.print(":");
  Serial.print(myRTC.minutes);
  Serial.print(":");
  Serial.println(myRTC.seconds);
  delay(1000);
}
