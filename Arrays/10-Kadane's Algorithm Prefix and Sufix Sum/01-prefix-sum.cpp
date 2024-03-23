#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {5, 4, 5, -3, 2, 8};
    vector<int> ans(arr.size()); // Resizing ans to match the size of arr

    ans[0] = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        ans[i] = ans[i - 1] + arr[i];
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
