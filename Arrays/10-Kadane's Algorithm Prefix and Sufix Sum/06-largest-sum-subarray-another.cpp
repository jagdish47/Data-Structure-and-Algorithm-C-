#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {4, -6, 2, 8};

    int maxi = INT8_MIN;

    for (int i = 0; i < v.size(); i++)
    {
        int prefix = 0;

        for (int j = i; j < v.size(); j++)
        {
            prefix += v[j];
            maxi = max(maxi, prefix);
        }
    }

    cout << maxi << endl;

    return 0;
}