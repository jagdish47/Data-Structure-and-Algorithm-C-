#include <iostream>
using namespace std;

int powerOfTwo(int num, int power)
{

    if (power == 1)
    {
        return 2;
    }

    return num * powerOfTwo(num, power - 1);
}

int main()
{

    int power = 5;
    int num = 2;

    int ans = powerOfTwo(num, power);

    cout << ans << endl;

    return 0;
}