#include <iostream>
using namespace std;

int findRightPlaceOfElement(int arr[], int n, int x)
{

    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (x == arr[mid])
        {
            ans = mid;
            return ans;
        }
        else if (x > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{

    int arr[] = {1, 4, 6, 8, 10, 14, 16, 18};

    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 15;

    int ans = findRightPlaceOfElement(arr, n, x);

    cout << ans << endl;

    return 0;
}