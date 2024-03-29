#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {4, -6, 2, 8};
    vector<int> sub;

    int sum = 0;
    int temp = 0;

    for (int i = 0; i < v.size(); i++)
    {

        for (int j = i; j < v.size(); j++)
        {
            sub.push_back(v[j]);

            for (int k = 0; k < sub.size(); k++)
            {

                sum += sub[k];

                if (sum > temp)
                {
                    temp = sum;
                }
                        }
            sum = 0;
        }
        sub.clear();
    }

    cout << temp << endl;

    return 0;
}