#include <iostream>
using namespace std;

int takeStair(int num)
{

    if (num <= 1)
    {
        return 1;
    }

    return takeStair(num - 1) + takeStair(num - 2);
}

int main()
{

    int num = 3;

    int ans = takeStair(num);

    cout << ans << endl;

    return 0;
}