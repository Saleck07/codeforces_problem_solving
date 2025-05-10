#include <iostream>
using namespace std;
int main()
{
    int grand;
    int petit;
    int count = 0;
    cin >> petit >> grand;
    while (petit <= grand)
    {
        petit *= 3;
        grand *= 2;
        count++;
    }
    cout << count;
    return 0;
}