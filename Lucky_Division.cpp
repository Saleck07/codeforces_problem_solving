// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int devide = n;
//     while(devide>0){
//         int mod = 0;
//         mod = devide % 10;
//         devide /= 10;
//         if(mod != 7 || mod != 4){
//             cout << "NO";
//             return 0;
//         }   
//     }
//     if(n % 4 != 0 || n % 7 != 0){
//         cout << "NO";
//         return 0;
//     }
//     cout << "YES";
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int devide = n;

    while(devide > 0){
        int mod = devide % 10;
        devide /= 10;
        if(mod != 7 && mod != 4){
            cout << "NO";
            return 0;
        }   
    }

    if(n % 4 != 0 && n % 7 != 0){
        cout << "NO";
        return 0;
    }

    cout << "YES";
    return 0;
}
