#include<iostream>

using namespace std; 

int sum(int num){
    
    int sum = 0;

    for(int i=0; i<=num; i++)
    {
        sum = sum + i ;
    }
    return sum ;
}
int main(){
    int num = 10;

    sum(num);

    int avg = sum(num)/num;

    cout << " avg :" << avg << "  ";

    return 0;
}