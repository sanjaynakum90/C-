#include<iostream>
 #include<stdio.h>
 
 using namespace std;
 
 
 int main(){
     
 
     // int a = 10; // 4 bytes
     // int b = a; // 4 bytes
     // int c = b; // 4 bytes
 
     int a = 10; // 4 bytes
     int *b = &a; 
     int **c = &b; 
 
     // decimal // 0 -9
     // hexa decimal 0-9, a- f
     // octan
     // binary
 
     cout << &a<< endl;
 
     
     cout << **c << endl;
 
     cout << &c <<endl;
 
 
         return 0;
 }