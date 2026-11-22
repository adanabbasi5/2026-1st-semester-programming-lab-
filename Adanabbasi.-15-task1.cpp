#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "8: ";
    cin >> num1;
    cout << "6: ";
    cin >> num2;
    if (num2 != 0) {
        cout << "Remainder = " << num1 % num2 << endl;
    } else {
       
        cout << "Remainder is undefined" << endl;

    }

    cout << "Average = " << (num1 + num2) / 2.0 << endl;

    cout << "Square of first number = " << num1 * num1 << endl;

    cout << "Square of second number = " << num2 * num2 << endl;

    return 0;

}