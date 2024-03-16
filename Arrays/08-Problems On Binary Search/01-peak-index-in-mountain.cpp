#include <iostream>
using namespace std;

int findPeakElement(int arr[], int n)
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid - 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}

int main()
{

    int arr[] = {2, 4, 5, 8, 10, 8, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = findPeakElement(arr, n);

    cout << "Peak element :: " << ans << endl;

    return 0;
}