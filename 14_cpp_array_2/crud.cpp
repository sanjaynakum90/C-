#include<iostream>
using namespace std;

int main()
{
    int size, index, element, choice = 0; // Initialize choice to 0

    cout << "size: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    // Use a do-while loop for better control
    do
    {
        cout << "-------------------------" << endl;
        cout << "Press 1 for PRINT array" << endl;
        cout << "Press 2 for UPDATE array" << endl;
        cout << "Press 0 to EXIT" << endl; // Added exit option
        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1: // PRINT array
                cout << endl << "-------------------------" << endl;
                for (int j = 0; j < size; j++)
                {
                    cout << arr[j] << " ";
                }
                cout << endl;
                break;

            case 2: // UPDATE array
                cout << "index: ";
                cin >> index;

                if (index >= 0 && index < size) // Index validation
                {
                    cout << "element: ";
                    cin >> element;
                    arr[index] = element;
                }
                else
                {
                    cout << "Invalid index...!" << endl;
                }
                break;

            case 0: // Exit program
                cout << "Exiting program..." << endl;
                break;

            default: // Handle invalid choices
                cout << "Invalid choice...!" << endl;
        }
    } while (choice != 0); // Continue until choice is 0

    return 0;
}
