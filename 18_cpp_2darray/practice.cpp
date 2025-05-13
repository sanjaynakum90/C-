#include<iostream>

using namespace std;
int main() {
   
    int rows = 3, cols = 3;
    int array[3][3] = {{1, 2, 3}, 
                       {4, 5, 6}, 
                       {7, 8, 9}};
        for (int i = 0; i < rows; i++) {
            int rowSum = 0;
         for (int j = 0; j < cols; j++) {
            rowSum += array[i][j];
            }
         cout << "Row " << i + 1 << " sum: " << rowSum << endl;
    }
    int colsSum =0;
    
    for(int j=0; j<cols; j++)
    {      int colsSum =0;
        for(int i=0; i<rows; i++)
        {
            colsSum += array[i][j];
        }
        cout << "cols" << j + 1 << " sum: " << colsSum << endl;
    }
    return 0;
}