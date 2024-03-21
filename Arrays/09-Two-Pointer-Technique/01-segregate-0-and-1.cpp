#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {1, 0, 1, 0, 1, 0};

    int start = 0;
    int end = v.size() - 1;

    while (start <= end)
    {

        if (v[start] == 0)
        {
            start++;
        }
        else if (v[start] == 1 && v[end] == 0)
        {
            swap(v[start], v[end]);
            start++;
            end--;
        }
        else if (v[end] == 1)
        {
            end--;
        }
    }

    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}

/**
 * Approaches ->
 *
 * 1.Sort the array
 * 2.Count total Zero, Count total One, on the same array first total Zero write 0 and other will be 1
 * 3.Create two Pointer start and end on based on condition swap
 */
