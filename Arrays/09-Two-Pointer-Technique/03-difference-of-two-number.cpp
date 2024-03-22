#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> arr = {5, 10, 3, 2, 50, 80};
    sort(arr.begin(), arr.end());

    int start = 0;
    int end = start + 1;
    int target = 45;

    while (start <= end)
    {

        int sub = arr[end] - arr[start];

        cout << sub << endl;

        if (sub == target)
        {
            cout << arr[start] << "  " << arr[end] << endl;
            break;
        }
        else if (sub > target)
        {
            start++;
        }
        else
        {
            end++;
        }
    }

    return 0;
}