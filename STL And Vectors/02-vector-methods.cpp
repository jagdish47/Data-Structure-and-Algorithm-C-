#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {10, 20, 30};

    v.push_back(100);       // adding at last
    v.pop_back();           // removing at last
    v.clear();              // clear complte array
    v.erase(v.begin() + 2); // remove from particular index, 2 here is index

    cout << v.front() << endl; // give you first element
    cout << v.back() << endl;  // give you last element
    cout << v.empty() << endl; // check weather vector empty or not

    return 0;
}