#include <iostream>

using namespace std;

int main() {
    int amt, n, k, result = 0;
    cin >> amt;

    for (int i = 0; i < amt; i++) {
        cin >> n >> k;
        int add = (k-1) / (n-1);
        result = k + add;
        cout << result << endl;
        result = 0;
    }
}