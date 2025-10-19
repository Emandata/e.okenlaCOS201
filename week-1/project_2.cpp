#include <iostream>
using namespace std;

int main() {
    int x, y, temp;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    temp = x;
    x = y;
    y = temp;

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
