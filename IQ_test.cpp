#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);

    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    int evenCount = 0, oddCount = 0;
    int lastEvenIndex = -1;
    int lastOddIndex = -1;

    for (int i = 0; i < n; ++i) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
            lastEvenIndex = i + 1;
        } else {
            oddCount++;
            lastOddIndex = i + 1;
        }
    }
    if (evenCount == 1)
        cout << lastEvenIndex << endl;
    else
        cout << lastOddIndex << endl;

    return 0;
}
