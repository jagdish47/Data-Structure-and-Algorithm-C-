#include <iostream>
#include <vector>
using namespace std;

int findTotalSum(vector<int> v)
{
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    return sum;
}

int main()
{

    vector<int> v = {3, 4, -2, 5, 8, 20, -10, 8};

    int totalSum = findTotalSum(v);

    int prefix = 0;
    int ans = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {

        prefix += v[i];
        ans = totalSum - prefix;

        if (ans == prefix)
        {
            cout << "True";
        }
    }

    return 0;
}