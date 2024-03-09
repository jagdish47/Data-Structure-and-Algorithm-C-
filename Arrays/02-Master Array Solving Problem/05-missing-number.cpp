#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 3, 4, 1, 6, 7};

    int totalSum = 0;
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        totalSum += arr[i];
    }

    // int naturalNumberByFormula = (arr[len - 1] * (arr[len - 1] + 1)) / 2;
    // cout << naturalNumberByFormula << endl;
    int naturalNumberSum = 0;

    for (int i = 1; i <= arr[len - 1]; i++)
    {
        naturalNumberSum += i;
    }

    cout << naturalNumberSum - totalSum << endl;

    return 0;
}