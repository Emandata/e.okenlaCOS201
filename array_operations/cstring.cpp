#include <iostream>
#include <cstring>
#include <cstdlib> 
using namespace std;

int main(){
    char a[20] = "Hello ";
    char b[10] = "World";

    strcat(a, b);                  // concatenate completely
    cout << "strcat result: " << a << endl;

    char c[20] = "Good ";
    strncat(c, b, 3);              // take first 3 chars only
    cout << "strncat result: " << c << endl;

    cout << "strcmp(Hello, World) = " << strcmp("Hello","World") << endl;

    // String to number
    char numStr[] = "123";
    int number = atoi(numStr);
    cout << "Converted number = " << number + 10 << endl;

    return 0;
}
