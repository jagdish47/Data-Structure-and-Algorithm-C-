#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseIt(vector<int> A, int N)
{
    if (N <= 1)
    {
        return A;
    }

    int start = 0;
    int end = N - 1;

    while (start < end)
    {
        swap(A[start], A[end]);
        start++;
        end--;
    }

    return A;
}

int main()
{

    int size;
    cin >> size;

    if (size <= 0)
    {
        cerr << "Invalid size: " << size << endl;
        return 1;
    }

    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    arr = reverseIt(arr, size);

    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}
