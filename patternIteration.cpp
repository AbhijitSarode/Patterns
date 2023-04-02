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

// ----- Pattern 2 -----
/*
    column = row;
    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= column; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
*/

// ----- Pattern 3 -----
/*
    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= row; j++) {
            cout << j << " ";
            column++;
        }
        column = 1;
    cout << endl;
    }
*/    

// ----- Pattern 4 -----
/*
    column = row;
    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= row; j++) {
            cout << column << " ";
        }
        column--;
        cout << endl;
    }
*/

// ----- Pattern 5 -----
/*
    column = row;
    for(int i = 1; i <= row; i++) {
        for(int j = column; j >= 1; j-- ) {
            cout << j << " ";
        }
        cout << endl;
    }
*/

// ----- Pattern 6 -----
/*
    int count = 1; 
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < row; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
*/

// ----- Pattern 7 -----
/*
    int count = 1;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < row; j++) {
            cout << count << " ";
            count = count + 2;
        }
        cout << endl;
    }
*/

// ----- Pattern 8 -----
/*
    int count = 2;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < row; j++) {
            cout << count << " ";
            count = count + 2;
        }
        cout << endl;
    }
*/

// ----- Pattern 9 -----
/*
    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= row; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }
*/

// ----- Pattern 10 -----
/*
int count = 1;
    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= row; j++) {
            if((j & 1) == 0) {
                cout << i << " ";
            }
            else {
                cout << count << " ";
                count++;
            }
        }
        cout << endl;
        count = 1;
    }
*/

// ----- Pattern 11 -----
/*
    int count = 1;
    for(int i = 1; i <= row; i++) {
        for(int j = 1; j <= row; j++) {
            if((j & 1) == 1) {
                cout << i << " ";
            }
            else {
                cout << count << " ";
                count++;
            }
        }
        cout << endl;
        count = 1;
    }
*/

// ----- Pattern 12 -----
/*
for(int i = 1; i <= row; i++) {
    int count = i;
    for(int j = 0; j < row; j++) {
        cout << count << " ";
        count = count + row;
    }
    cout << endl;
}
*/

// ----- Pattern 13 -----
/*
*/
for(int i = 1; i <= row; i++) {
    for(int j = 1; j <= row; j++) {
        
    }

    return 0;
}

