#include <iostream>
using namespace std;

int findPeakElement(int arr[], int n)
{

    int start = 0;
    int end = n - 1;
    int ans = -1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            ans = arr[mid];
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{

    int arr[] = {4, 6, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = findPeakElement(arr, n);

    cout << ans << endl;

    return 0;
}