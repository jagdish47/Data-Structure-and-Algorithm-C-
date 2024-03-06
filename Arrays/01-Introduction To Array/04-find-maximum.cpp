#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {32, 3, 234, 23, 423, 423, 23, 23, 423, 4};

    int len = sizeof(arr) / sizeof(arr[0]);

    int maxi = INT8_MIN;

    for (int i = 0; i < len; i++)
    {

        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    cout << "Maximum Is :: " << maxi << endl;

    return 0;
}