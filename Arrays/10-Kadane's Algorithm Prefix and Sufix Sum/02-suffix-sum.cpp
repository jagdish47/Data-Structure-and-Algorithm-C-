#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {5, 4, 5, -3, 2, 8};
    vector<int> ans(arr.size());

    ans[arr.size() - 1] = arr[arr.size() - 1];

    for (int i = arr.size() - 2; i >= 0; i--)
    {

        ans[i] = ans[i + 1] + arr[i];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
