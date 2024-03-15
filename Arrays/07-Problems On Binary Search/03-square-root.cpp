#include <iostream>
using namespace std;

int sqrtBinarySearch(int x)
{

    int start = 0;
    int end = x;

    int ans = -1;

    if (x < 2)
    {
        return 0;
    }

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        int sqrt = mid * mid;

        if (sqrt == x)
        {
            ans = mid;
            return ans;
        }
        else if (sqrt > x)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{

    int x = 100;

    int ans = sqrtBinarySearch(x);

    cout << "Sqrt root is :: " << ans << endl;

    return 0;
}