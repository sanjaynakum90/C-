#include<iostream>
 using namespace std;
 
 int main(){
 
 
 
     int arr[5][5] = {
             {11, 12, 13, 14, 15}, // 0 
             {16, 17, 18, 19, 20}, // 1
             {21, 22, 23, 24, 25}, // 2
             {26, 27, 28, 29, 30}, // 3
             {31, 32, 33, 34, 35}, // 4
         };
          
 
 
         for(int i=0; i<5; i++) // 0
         {
             for(int j=0; j<5; j++) // 0
             {
                 if(i==0 || i==4 || j==0 || j==4)
                 {
                     cout << arr[i][j] << " ";
                 }
                 else{
                     cout << " " << "  " ;
                 }
             }
             cout << endl;
         }
 
 
 
 
     return 0;
 }