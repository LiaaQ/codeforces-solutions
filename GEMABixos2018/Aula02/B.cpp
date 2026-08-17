#include <iostream>

using namespace std;

int main() {
    long long amt, val, lo = LONG_MAX, hi = 0;
    cin >> amt;

    for (int i = 0; i < amt; i++) {
        cin >> val;
        if (val <= lo) lo = val;
        if (val >= hi) hi = val;
    }

    cout << hi-lo << endl;
}