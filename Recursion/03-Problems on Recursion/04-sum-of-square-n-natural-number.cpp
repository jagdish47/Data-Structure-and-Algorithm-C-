#include <iostream>
using namespace std;

int sumOfSquare(int num)
{

    if (num == 1)
    {
        return 1;
    }

    return num * num + sumOfSquare(num - 1);
}

int main()
{

    int num = 5;

    int ans = sumOfSquare(num);

    cout << ans << endl;

    return 0;
}