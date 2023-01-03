#include <iostream>
using namespace std;

// ----- Pattern 1 -----

/*
void printPattern1(int row, int count) {
    
    if (row == count)
    {
        return;
    }
    
    for(int i = 1; i <= row; i++) {
        cout << " *";
    }
    cout << endl;
    printPattern1(row, count + 1);

}
*/

void printPattern2(int row, int count) {
    
    if(row == count) {
        return;
    }

    for(int i = 1; i <= row; i++) {
        cout << count << " ";
    }
    cout << endl;
    printPattern2(row, ++count);
}

int main() {

    int row;
    cout << "Enter number of rows" << endl;
    cin >> row;

    // printPattern1(row, 1);
    printPattern2(row, 1);

    return 0;
}