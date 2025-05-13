#include <iostream>
using namespace std;

int main() {
    int rows = 4, cols = 4;
    int array[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int sum = 0;
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += array[i][j];
            count++;
        }
    }

    double average = (sum) / count;
    cout << "The average of the elements is: " << average << endl;

    return 0;
}
