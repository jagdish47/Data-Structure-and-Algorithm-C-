#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {10, 20, 30, 40, 50};

    v.begin();  // pointing to first Element
    v.end();    // pointing to last+1 Element
    v.rbegin(); // pointing to last element
    v.rend();   // pointing to first-1 element

    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}