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

// ----- Pattern 2 -----
/*
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
*/

// ----- Pattern 3 -----
/*
void printPattern3(int row, int count) {
    if(row == count) {
        return;
    }
    
    for (int i = 1; i <= row; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    printPattern3(row, ++count);
}
*/

// ----- Pattern 4 -----
/*
void printPattern4(int row, int count) {
    if(count == 0) {
        return;
    }
    for(int i = row; i >= 1; i--) {
        cout << count << " ";
    }
    cout << endl;
    printPattern4(row, count-1);
}
*/

// ----- Pattern 5 -----
/*
void printPattern5(int row, int count, int iteration) {
    count = row;
    if(iteration == 0) {
        return;
    }

    for(int i = row; i >= 1; i--) {
        cout << count << " ";
        count--;
    }
    cout << endl;
    printPattern5(row, --count, --iteration);
}
*/

// ----- Pattern 6 -----
/*
void printPattern6(int row, int count = 1, int depth = 0) {
    if(depth == row) {
        return;
    }

    for(int i = 1; i <= row; i++) {
        cout << count << " ";
        count++;
    }
    cout << endl;
    printPattern6(row, count, ++depth);
}
*/

// ----- Pattern 7 -----
/*
void printPattern7(int row, int count = 1, int depth = 0) {
    if(depth == row) {
        return;
    }

    for(int i = 1; i <= row; i++) {
        cout << count << " ";
        count += 2;
    }
    cout << endl;
    printPattern7(row, count, ++depth);
}
*/

// ----- Pattern 8 -----
/*
void printPattern8(int row, int count = 2, int depth = 0) {
    if(depth == row) {
        return;
    }

    for(int i = 1; i <= row; i++) {
        cout << count << " ";
        count += 2;
    }
    cout << endl;
    printPattern8(row, count, ++depth);
}
*/

// ----- Pattern 9 -----
/*
void printPattern9(int row, int depth = 1) {
    int count = 1;
    if(depth == row) {
        return;
    }
    for(int i = 1; i <= row; i++) {
        cout << depth * count << " ";
        count++;
    }
    cout << endl;
    printPattern9(row, ++depth);
}
*/

int main() {

    int row;
    cout << "Enter number of rows" << endl;
    cin >> row;

    // printPattern1(row, 1);
    // printPattern2(row, 1);
    // printPattern3(row, 1);
    // printPattern4(row, row);
    // printPattern5(row, row, row);
    // printPattern6(row);
    // printPattern7(row);
    // printPattern8(row);
    printPattern9(row);

    return 0;
}