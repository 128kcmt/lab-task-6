#include <iostream>

int main() {
    int rows, cols;
    using namespace std;
    // Get dimensions from the user
    cout << "Enter the number of rows maximum of 3:";
    cin >> rows;
    if (rows > 3) {
        cout << "rows more than 3 set to 3" << endl;
        rows = 3;
    }

    cout << "Enter the number of columns maximum of 3:";
    cin >> cols;
    if (cols > 3) {
        cout << "cols over 3 set to 3." << endl;
        cols = 3;
    }

    
    double** dynamicarray = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        dynamicarray[i] = new double[cols];
    }

    
    double value = 1.0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            dynamicarray[i][j] = value++;
      }
    }

    
    cout << "2D Array values:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << dynamicarray[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
