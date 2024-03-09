#include <iostream>
using namespace std;

int main()
{

    int arr[] = {61, 30, 28, 47, 42, 25, 41, 56, 27, 45, 44, 34, 46, 35, 58, 36, 60, 29, 53, 55, 32, 31, 33, 59, 50, 51, 52, 37, 39, 38, 43, 49, 54, 57, 40, 26, 48};

    int maxi = INT8_MIN;
    int secondMaxi = INT8_MIN;

    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    for (int i = 0; i < len; i++)
    {

        if (maxi != arr[i])
        {
            secondMaxi = max(secondMaxi, arr[i]);
        }
    }
    cout << secondMaxi << endl;

    return 0;
}