#include<iostream>

using namespace std ;

int main()
{   
    int size;
 
    cout << "size: ";
    cin >> size;

    int nums[size];

   

    for(int i=0; i<size; i++)
    {
         cout << "nums"<< "["<< i << "]: ";
         cin >> nums[i];
    }
       cout << endl;


       int sum =0;
     for(int i=0; i<size; i++)
     { 
 
        sum = sum + nums[i];
     }

     
  int avg = sum/size;
  cout << "avg: " << avg << endl;;



    return 0;
}