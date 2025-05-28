#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> arr = {2, 5, 2, 6, 7, 1, 0, 6, 2, 8};
    vector <int> sm;

    for(int i=0; i<arr.size()-1; i++)
    {
        if( arr[i]< arr[i-1] && arr[i]< arr[i+1] )
        {
            sm.push_back(arr[i]);
        }
    }
    for(int ele :sm)
    {
        cout << ele << " ";  
    }


    return 0;
}
