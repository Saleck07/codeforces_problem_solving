#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum_x = 0, sum_y = 0, sum_z = 0;

    while (n--)
    {
        long x, y, z;
        cin >> x >> y >> z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }
    if (sum_x == 0 && sum_y == 0 && sum_z == 0)
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";

    return 0;
}