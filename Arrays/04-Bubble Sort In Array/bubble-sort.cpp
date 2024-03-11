#include <iostream>
using namespace std;

int main()
{
    int arr[] = {7, 4, 8, 5, 3};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        bool swapped = 0;
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = 1;
                swap(arr[j], arr[j + 1]);
            }
        }

        if (swapped == 0)
        {
            break;
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
