#include<iostream>

using namespace std;

int main()
{
   
    int size,choice;
    cout << "size :";
    cin >> size;

    int arr[size];

    for(int i=0; i<size; i++)
    {
        cout << "arr[" << i << "] :";
        cin >> arr[i];
    }

    while(choice != 0)
    {
        cout << endl << "----------------------------------" << endl;
        cout << "pres 1 for Delete element" << endl;
        cout << "pres 2 for Update element" << endl;
        cout << "pres 3 for Insert element" << endl;
        cout << "pres 4 for Read element" << endl;

        cout << "---------------------------------" << endl;
        cout << "Enter your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
             int ind;
             cout << "index:";
             cin >> ind;


            for(int i=ind; i<size-1; i++){
                arr[i] = arr[i+1];
            }
            size--;

            cout << "element deleted successfully...!" << endl;
                break;
        
        case 2:
             int index, element;
             cout << "index :";
             cin >> index;
             cout << "element :";
             cin >> element;
            
            arr[index] =element;

            cout << "element Updated successfully...!" << endl;
             break;

        case 3:

             int  insEle,insIndex;

             cout << "index :";
             cin >> insIndex;
             cout << "element :";
             cin >> insEle;
        
             for(int i=size; i>insIndex; i--)
             {
                arr[i] = arr[i-1]; 
             }
             arr[insIndex] = insEle;
             size++;
              break;
        
        case 4:
             for(int i=0; i<size; i++)
             
             {
                 cout << arr[i] << " ";
             }
             break;
        default: 
             cout << "invalide choice...!" << endl;
             break;
        }
    }
    return 0;
} 