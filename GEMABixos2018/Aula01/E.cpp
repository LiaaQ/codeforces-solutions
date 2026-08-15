#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int p;
    cin >> p;

    if (p == 2) {
        cout << 0 << endl;
        return 0;
    }

    cout << 1 << endl;
    cout << (p/2)+1 << " " << p/2 << endl;
}