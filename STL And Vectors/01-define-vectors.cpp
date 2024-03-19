#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> one = {1, 2, 3, 4, 5, 6, 7}; // direct give values
    vector<float> two;                       // only define no size no initial value
    vector<int> three(5);                    // size
    vector<int> four(5, 1);                  // size with value

    return 0;
}