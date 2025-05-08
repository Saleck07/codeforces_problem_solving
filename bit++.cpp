#include <iostream>
using namespace std;
int main(){
    int n;
    int start=0;
    cin >> n;
    for(int i =0; i<n;i++){
        string s;
        cin >> s;
        if(s[0]=='+'||s[2]=='+'){
            start++;
        }
        else{
            start--;
        }
    }
    cout << start;
}