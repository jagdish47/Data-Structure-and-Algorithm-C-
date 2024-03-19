#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> v = {34, 34, 2, 42, 34, 63, 6, 45, 745, 6, 355, 3, 534, 534};

    int ans = binary_search(v.begin(), v.end(), 34);
    cout << ans << endl;

    cout << find(v.begin(), v.end(), 45) - v.begin() << endl;

    return 0;
}
