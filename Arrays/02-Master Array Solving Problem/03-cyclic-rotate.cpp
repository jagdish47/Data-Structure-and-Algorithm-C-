void rotate(int arr[], int n)
{

    int start = 0;
    int end = n - 1;

    while (start < end)
    {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    start = 1;
    end = n - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab