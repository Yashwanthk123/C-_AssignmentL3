#include <iostream>

using namespace std;

int main() {
    int n1,n2;
    cout << "Enter first number:";
    cin >> n1;
    cout << "Enter second number:";
    cin >> n2;
    if (n1>n2) {
        cout << "First number " <<n1<< " is the largest";
    }
     else {
        cout << "Second number " <<n2<< " is the largest";
    }
    return 0;
}