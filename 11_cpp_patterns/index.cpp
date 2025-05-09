#include<iostream>

using namespace std;

int main()
{
    // int row;
    // int col;

    // cout << "row :";
    // cin >> row;

    // cout << "col :";
    // cin >> col;

    // for(int i=0; i<row; i++){

    //     for(int j=0; j<col; j++){
    //     cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

      
    int n = 5;
 
    for(int i=5; i>=1; i--) 
    {
        for(int j=i; j<=5; j++)
        {
                cout << j << " ";
        }
        cout << endl;
    }

     return 0;
}