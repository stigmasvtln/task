#include <iostream>

using namespace std;

void fiba(int n) {
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; ++i) {
        cout << a << endl;
        int temp = a;
        a += b;
        b = temp;
    }
}

int main() {
    cout << "Hello, World!" <<endl; 
    fiba(10);
    
    return 0;
}