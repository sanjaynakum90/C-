#include<iostream>
using namespace std;

template <typename T1, typename T2>

class cal{
    public:
       cal(T1 x, T2 y){
        cout << x+y <<endl;
       }
};

int main(){

cal<double,int> obl1(6.25, 2);

    return 0;
}