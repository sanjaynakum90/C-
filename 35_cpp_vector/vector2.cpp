#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int size;
    cout << "Enter size :";
    cin >> size;

    vector <int> V1;

    vector <vector <int>> V2(size, V1);

    for(vector <int> ele : V2)
    {
        for(int i=0; i<size; i++)
        {
            cout << "ele["<< i << "]:" ;
            int a;
            cin >> a;
            V1.push_back(a);
        }
        cout << endl;
    }

    for(vector <int> ele : V2)
    {
      for(int e :V1)
      {
        cout << e << " ";
      }
      cout << endl;
    }



    return 0;
}
