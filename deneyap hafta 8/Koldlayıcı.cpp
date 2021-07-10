#include <iostream>
#include <string>
using namespace std;

class havuz{
public:
    int yaricap;
    float alan;
    void hesap(){
        int y;
        cout<<"Havuz icin yaricap giriniz :";
        cin>>y;
        yaricap=y;
        alan=(3.14*y*y*2);
        cout<<"Dairenin capi :"<<yaricap*2<<endl;
        cout<<"2 Dairenin alani :"<<alan<<endl;
    }

};


int main(){
    havuz h1;
    h1.hesap();
    return 0;

};



