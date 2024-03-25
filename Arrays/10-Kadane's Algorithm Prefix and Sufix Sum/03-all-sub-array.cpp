#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {3, 50, 33, 6, 10, 1};

    vector<int> temp;

    for (int i = 0; i < v.size(); i++)
    {

        for (int j = i; j < v.size(); j++)
        {
            temp.push_back(v[j]);

            for (int k = 0; k < temp.size(); k++)
            {
                cout << temp[k] << " ";
            }
            cout << endl;
        }
        temp.clear();
    }

    return 0;
}