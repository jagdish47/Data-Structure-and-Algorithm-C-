#include <iostream>
using namespace std;

int findFactorial(int num)
{

    if (num == 1 || num == 0)
    {
        return 1;
    }

    return num * findFactorial(num - 1);
}

int main()
{

    int num = 5;

    int ans = findFactorial(num);

    cout << ans << endl;

    return 0;
}