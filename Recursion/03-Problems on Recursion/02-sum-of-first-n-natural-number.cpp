#include <iostream>
using namespace std;

int findSum(int n)
{

    if (n == 1)
    {
        return 1;
    }

    return n + findSum(n - 1);
}

int main()
{

    int n = 10;

    int ans = findSum(n);

    cout << ans << endl;

    return 0;
}