#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {2, 7, 11, 15, 27};

    int start = 0;
    int end = v.size() - 1;
    int target = 22;

    while (start < end)
    {

        int sum = v[start] + v[end];

        if (sum == target)
        {
            cout << "Available " << start << " " << end;
            break;
        }
        else if (sum > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }

    return 0;
}

/**
 * Approaches ->
 *
 * 1.Using brute force take two for loop hold on one element and move other complete array and check
 * 2.take two pointer start and at end, than check the condition and move start and end element accordingly
 */