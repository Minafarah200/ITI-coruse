#include <iostream>
using namespace std;

int main() {
    int n = 7; 
    for (int i = 0; i < n; i++) {
        cout << "*";
        for (int j = 0; j < i; j++) cout << " ";)
        cout << "*";
        for (int j = 0; j < (n - i - 1) * 2 - 1; j++) cout << " ";
        if (i != n - 1) cout << "*";
        for (int j = 0; j < i; j++) cout << " ";
        cout << "*" << endl;
    }

    return 0;
}

