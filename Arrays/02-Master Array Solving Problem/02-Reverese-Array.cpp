#include <iostream>
using namespace std;

int main()
{

    int arr[] = {6, 11, 7, 4, 8, 9};

    int len = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = len - 1;

    while (start < end)
    {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}