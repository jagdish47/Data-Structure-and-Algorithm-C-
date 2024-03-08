#include <iostream>
using namespace std;

int main()
{

    int arr[] = {10, 20, 7, 11, 8, 4};
    int find = 3;

    int len = sizeof(arr) / sizeof(arr[0]);
    int index = -1;

    for (int i = 0; i < len; i++)
    {

        if (arr[i] == find)
        {
            index = i;
            break;
        }
    }

    cout << index << endl;

    return 0;
}