#include<iostream>
#include<string.h>

using namespace std;

int main(){
   int *arr;

   arr = new int[5];

   if(arr == NULL)
   {
    cout << "memory allocation is failed.....!" << endl;
   }
   else{
     cout << "memory allocation is successfully...!" << endl;
   }

   cout << arr << "   -    " <<  *arr << endl;

   delete[] arr;
   arr = NULL;


   if(arr == NULL)
   {
    cout << "memory deallocation is successfully.....!" << endl;
   }
   else{
     cout << "memory deallocation is failed...!" << endl;
   }



    return 0;
}