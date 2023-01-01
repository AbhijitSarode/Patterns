#include <iostream>
using namespace std;

int main() {
    int row, column;
    cout << "Enter the number of rows" << endl;
    cin >> row;

// ----- Pattern 1 -----

/*
    column = row;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            cout << " *";
        }
        cout << endl;
    }
*/

// -----Pattern 2 -----
    column = row;
    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= column; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}