#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums)
{

       int totalSum = nums[0];

    for (int i = 0; i < nums.size(); i++)
    {

        int tempSum = 0;

        for (int j = i; j < nums.size(); j++)
        {

            tempSum += nums[j];

            if (tempSum > totalSum)
            {
                totalSum = tempSum;
            }
        }
    }

    return totalSum;
}

int main()
{

    int size;
    cin >> size;

    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int ans = maxSubArray(arr);

    cout << ans << endl;
}