#include<iostream>

using namespace std; 

int sum(){
    int num = 9;
    int sum = 0;

    for(int i=0; i<=num; i++)
    {
        sum = sum + i ;
    }
    return sum;
}
int main(){

    sum();

    int avg = sum()/9;

    
    cout << "avg is " << avg;

    return 0;
}