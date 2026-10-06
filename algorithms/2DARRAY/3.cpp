#include <iostream>
using namespace std;

//transpose of a matrix

int main() {
    int r, c;
    int mat[10][10], trans[10][10];

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> mat[i][j];
        }
    }

    // Finding transpose
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            trans[j][i] = mat[i][j];   // assigning mat[i][j] to trans and its not transposed yet
        }
    }

    cout << "Transpose of the matrix:\n";
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            cout << trans[i][j] << " ";  // here it  is transposed
        }
        cout << endl;
    }

    return 0;
}
