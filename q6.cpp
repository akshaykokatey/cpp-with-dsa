#include <iostream>
using namespace std;

int main()
{

    int a = 2, b = 3, c;

    c = b;
    b = a;
    a = c;
    cout << "The value of a is :" << a << endl;
    cout << "The value of b is :" << b << endl;

    return 0;
}