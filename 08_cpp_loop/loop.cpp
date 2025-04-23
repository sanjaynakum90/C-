#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    int num ;
    cout << "enter num: ";
    cin >> num;
     
    while(i <=10)
    {
        cout << num << "X" << i <<  " = " << num*i<< endl;

        i++;
    }
    return 0;

}