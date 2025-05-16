#include<iostream>

using namespace std; 

void sum(){
    int num = 9;
    int sum = 0;

    for(int i=0; i<=num; i++)
    {
        sum = sum + i ;
    }
    cout << sum ;
}
int main(){

    sum();

    return 0;
}