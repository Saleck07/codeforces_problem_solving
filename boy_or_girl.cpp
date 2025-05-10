#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    string s;
    cin >> s;
    
    unordered_set<char> unique;
    for (char ch : s)
    {
        unique.insert(ch);
    }
    int count = unique.size() ;
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER! ";
    }
    else
    {
        cout << "IGNORE HIM!";  
    }

    return 0;
}