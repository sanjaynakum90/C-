#include<iostream>
#include<string.h>

using namespace std;

class eng{
    public:
    char eng1[100] = "V8";
    char eng2[100] = "V12";
    char eng3[100] = "turbo";
};


class wheels {
    public:
       char wheel1[100] = "alloy wheel";
       char wheel2[100] = "alluminiam wheel";
       char wheel3[100] = "stringe wheel";
};


class car:public eng, public wheels{
    public:
         void spf(){
            cout << "Vehical has " << this->eng1 <<"engin" << " with " << this->wheel1 << " ...!";
         }
};

int main(){

    car vhl1;

    vhl1.spf();

    return 0;
}