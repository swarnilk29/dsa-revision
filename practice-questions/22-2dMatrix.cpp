#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int mat[rows][cols];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> mat[i][j];

    // Transpose
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
