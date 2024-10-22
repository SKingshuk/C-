#include <iostream>
using namespace std;

void addition(int, int);
int main()
{
    addition(10, 20);
    addition(10, 10);

    return 0;
}

void addition(int a, int b)
{
    int sum = a + b;
    cout << "sum=" << sum << endl;
}