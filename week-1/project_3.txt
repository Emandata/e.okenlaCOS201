#include <iostream>
using namespace std;

int main() {
    double amount, tax;

    cout << "Enter total purchase amount: ";
    cin >> amount;

    tax = amount * 0.06;

    cout << "Sales tax is: " << tax << endl;

    return 0;
}
