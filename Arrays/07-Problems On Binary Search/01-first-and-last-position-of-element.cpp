#include <iostream>
using namespace std;

int findFirstElement(int arr[], int n, int x)
{

    int start = 0;
    int end = n - 1;
    int first = -1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
        {
            first = mid;
            end = mid - 1;
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

    return first;
}

int findLastElement(int arr[], int n, int x)
{

    int start = 0;
    int end = n - 1;
    int last = -1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] == x)
        {
            last = mid;
            start = mid + 1;
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

    return last;
}
int main()
{

    int arr[] = {3, 4, 5, 6, 6, 6, 6, 6, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;

    int firstElement = findFirstElement(arr, n, x);
    int lastElement = findLastElement(arr, n, x);

    cout << "First :: " << firstElement << endl;
    cout << "Last :: " << lastElement << endl;

    return 0;
}