#include<iostream>
#include<vector>

using namespace std;

int main(){


    vector <int> arr(1,100);
    vector <int > arr2 {1, 2, 3, 4, 5};

    arr.push_back(99);
    arr.push_back(88);
    arr.push_back(77);
    arr.push_back(66);


    arr.pop_back();
    
     for(int ele: arr)
     {
        cout << ele << endl;
     }


     arr.erase(arr.begin()+1);

     arr.insert(arr.end(), 66);



     for(int i = arr2.size; i>0; i--){
        
     }

    return 0;
}