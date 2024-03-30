#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {9, 5, 8, 12, 2, 3, 7, 4};
    vector<int> suffix(v.size());

    suffix[v.size() - 1] = v.back();

    for (int i = v.size() - 2; i >= 0; i--)
    {
        suffix[i] = max(suffix[i + 1], v[i]);
    }

    for (int i = 0; i < v.size() - 1; i++)
    {

        int maxi = INT8_MIN;

        maxi = max(maxi, v[i] - suffix[i + 1]);

        cout << maxi << endl;
    }

    return 0;
}
