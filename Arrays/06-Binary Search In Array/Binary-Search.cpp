#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x)
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {

        int mid = (start + end) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (x > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{

    int arr[] = {3, 5, 6, 8, 44, 66, 70, 80, 100};

    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    int ans = binarySearch(arr, n, x);

    cout << ans << endl;

    return 0;
}