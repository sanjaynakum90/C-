#include<iostream>
#include<string.h>

using namespace std;

class travel{
    public:
    void truck(int num){
        cout << "truck is traveling with" << num << "passenger" << endl;
    }
    void truck(int n1, int n2){
        cout << "truck is traveling with" << n1 << "passenger, and" << n2 << " goodies." << endl;  
    }
};

int main(){

    travel tr1;

    tr1.truck(10,20);


    return 0;
}