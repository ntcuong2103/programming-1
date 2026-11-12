#include <iostream>
#include <string>
using namespace std;

int main() {
    // declare variables
    int a;
    string b;

    // prompt user for input
    cout << "Enter a string and a number: ";
    cin >> b >> a; // read a string and an integer from user input
    // print the entered string and number
    cout << "You entered: " << b << " and " << a << endl;

    return 0;
}