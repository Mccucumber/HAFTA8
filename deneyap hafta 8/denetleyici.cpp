
#include <iostream>
#include <string>
using namespace std;

class bahce{
     public:
     int kenar;
     int alan;
     int cevre;
     void kenarata(){
        int k;
        cout<<"Kenar uzunlugunu giriniz:";
        cin>>k;
        cout<<endl;
        cout<<"Bahcenin Alani:"<<k*k<<endl;
        cout<<"Bahcenin Cevresi:"<<k*4;

     }
};


int main(){

    bahce b1;
    b1.kenarata();
    return 0;

}

