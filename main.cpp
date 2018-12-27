#include <iostream>

using namespace std;

int temp=0,hum=0;
 class Sensors{
 public:

 void disp()
 {
     cout<<"Temp reading: "<<temp<<"\n Humidity reading: "<<hum;
 }
 };

 class TemperatureSensor: public Sensors{
 public:
 void read(int tem)//read temp
 {
     temp=tem;
    }
 };
 class HumiditySensor: public Sensors{
 public:
 void read(int hu)
 {
     hum=hu;
    }
 };

int main () {

    int t1,t2;
   Sensors t;
   TemperatureSensor ts;// object
   HumiditySensor hs;
    cout<<"Enter temperature reading";
    cin>>t1;
    cout<<"Enter humidity reading";
    cin>>t2;

   ts.read(t1);
   hs.read(t2);
    t.disp();

return 0;
}
