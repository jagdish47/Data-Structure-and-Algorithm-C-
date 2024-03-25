#include <iostream>
using namespace std;

void printNumber(int n)
{

    if (n == 0)
    {
        return;
    }
    printNumber(n - 1);

    if (n % 2 == 0)
    {
        cout << n << endl;
    }
}

int main()
{

    int n = 10;

    printNumber(n);

    return 0;
}