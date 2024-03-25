#include <iostream>
using namespace std;

void wishHappyBirthday(int n)
{

    if (n == 0)
    {
        cout << "Happy Birthday" << endl;
        return;
    }

    cout << n << " Days Left in Birthday" << endl;

    wishHappyBirthday(n - 1);

    cout << "How are you " << n << endl;
}

int main()
{

    int daysLeft = 5;

    wishHappyBirthday(daysLeft);

    return 0;
}