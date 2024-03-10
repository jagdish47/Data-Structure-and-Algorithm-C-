#include <iostream>
using namespace std;

void ourSwap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{

    int arr[] = {10, 2, 3, 2, 1, 3, 4, 5, 6, 4, 3, 2, 1, 0};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {

        int index = i;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[index])
            {
                index = j;
            }
        }

        ourSwap(arr[i], arr[index]); // passed by reference
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}