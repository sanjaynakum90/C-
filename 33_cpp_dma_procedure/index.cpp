#include<iostream>
#include<string.h>

using namespace std;

int main(){
   int *x;

   x = new int(20);

   if(x == NULL)
   {
    cout << "memory allocation is failed.....!" << endl;
   }
   else{
     cout << "memory allocation is successfully...!" << endl;
   }

   cout << x << "   -    " <<  *x << endl;

   delete x;
   x = NULL;


   if(x == NULL)
   {
    cout << "memory deallocation is successfully.....!" << endl;
   }
   else{
     cout << "memory deallocation is failed...!" << endl;
   }



    return 0;
}