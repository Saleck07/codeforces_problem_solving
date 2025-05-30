#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string word;
    cin >> word;
    vector<char> chars;
    for (char s : word)
    {
        if (tolower(s) != 'o' && tolower(s) != 'e' && tolower(s) != 'i' && tolower(s) != 'u' && tolower(s) != 'a' && tolower(s) != 'y')
        {
            chars.push_back(tolower(s));
        }
    }
    for (char s : chars)
    {
        cout << "." << s;
    }
    return 0;
}