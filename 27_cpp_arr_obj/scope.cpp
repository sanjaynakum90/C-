#include<iostream>

using namespace std;

int x = 100;

int main(){

    int x = 40;

    cout << x << endl;
    cout << ::x << endl;

    return 0;
}