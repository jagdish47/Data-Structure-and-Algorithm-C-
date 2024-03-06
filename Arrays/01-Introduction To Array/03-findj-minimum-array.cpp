#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {32, 3, 234, 23, 423, 423, 23, 23, 423, 4};

    int len = sizeof(arr) / sizeof(arr[0]);

    int mini = INT8_MAX;

    for (int i = 0; i < len; i++)
    {

        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }

    cout << "Minimum :: " << mini << endl;

    return 0;
}