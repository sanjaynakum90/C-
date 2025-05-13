#include<iostream>
using namespace std;

int main ()
{
    int start_year, end_year;

    
    int size = 0;

    cout << "start_year:";

    cin >> start_year;

    cout << "end_year:";

    cin >> end_year;


    int array[100];

    for(int i=start_year; i<end_year; i++)
    {
        if(i%4==0)
        {
            array[size] =i;
            size++;
        }
    }

    cout << "Leap Year["<< size << "] = [";

    for(int j=0; j<size; j++)
    {
        cout << array[j] << " ";
    }
    cout << "]";
 
    return 0;
}