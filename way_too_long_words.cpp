#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        int s = word.size();
        if(s>10){
            cout << word[0] << s-2 << word[s-1] << "\n";
            
        }
        else{
            cout << word << "\n";;
        }
    }
}