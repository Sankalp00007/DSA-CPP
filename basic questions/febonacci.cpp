#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, next;

    cout << "Enter the term number: ";
    cin >> n;

    if(n == 0) {
        cout << "Fibonacci number is: 0";
    }
    else if(n == 1) {
        cout << "Fibonacci number is: 1";
    }
    else {
        for(int i=2; i<=n;i++){
            next = a+b;
            a=b;
            b=next;
        }
        cout << "Fibonacci number is: " << b;
    }

    return 0;
}