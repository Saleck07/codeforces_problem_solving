#include <iostream>
using namespace std;
int main()
{
    string players;
    cin >> players;
    int s = players.size();
    int counter = 1;
    for (int i = 0; i < s; i++)
    {
        if (players[i] == players[i + 1])
        {
            counter++;
        }
        else
        {
            counter = 1;
        }
        if (counter == 7)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}