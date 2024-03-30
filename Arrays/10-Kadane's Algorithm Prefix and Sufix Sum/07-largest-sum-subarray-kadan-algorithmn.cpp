#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {4, -6, 2, 8};

    int maxi = INT8_MIN;
    int prefix = 0;

    for (int i = 0; i < v.size(); i++)
    {
        prefix += v[i];
        maxi = max(maxi, prefix);

        if (prefix < 0)
        {
            prefix = 0;
        }
    }

    cout << maxi << endl;

    return 0;
}