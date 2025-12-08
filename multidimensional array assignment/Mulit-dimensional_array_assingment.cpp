#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    // Random size between 2 and 10
    int rows = rand() % 9 + 2;
    int cols = rand() % 9 + 2;

    int matrix[10][10]; // max needed size

    // Fill array with random values (0 - 99)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100;
        }
    }

    cout << "Original Array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Shuffle the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            int i1 = rand() % rows;
            int j1 = rand() % cols;

            // Swap
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i1][j1];
            matrix[i1][j1] = temp;
        }
    }

    cout << "\nShuffled Array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
