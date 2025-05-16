#include<iostream>

using namespace std; 

void sum( int num){
    
    int sum = 0;

    for(int i=0; i<=num; i++)
    {
        sum = sum + i ;
    }
    cout << sum ;
}
int main(){
    int num = 10;

    sum(num);

    return 0;
}