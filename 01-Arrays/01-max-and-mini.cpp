#include <iostream>
#include <vector>
using namespace std;

int findSum(vector<int> A, int N)
{

    if (N == 0)
    {
        return 0;
    }

    int mini = INT8_MAX;
    int maxi = INT8_MIN;

    for (int i = 0; i < N; i++)
    {

        if (A[i] > maxi)
            maxi = A[i];

        if (A[i] < mini)
            mini = A[i];
    }

    return maxi + mini;
}

int main()
{

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int size;
    cin >> size;

    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int ans = findSum(arr, size);

    cout << ans << endl;

    return 0;
}