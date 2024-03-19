#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> v = {34, 34, 2, 42, 34, 63, 6, 45, 745, 6, 355, 3, 534, 534};

    sort(v.begin(), v.end()); // 2 3 6 6 34 34 34 42 45 63 355 534 534 745

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v.begin(), v.end(), greater<int>()); // 745 534 534 355 63 45 42 34 34 34 6 6 3 2
    sort(v.rbegin(), v.rbegin());             // 745 534 534 355 63 45 42 34 34 34 6 6 3 2

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
