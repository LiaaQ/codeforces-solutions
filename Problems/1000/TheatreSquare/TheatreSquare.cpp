#include <iostream>

using namespace std;

int main() {
    unsigned long long n, m, a;
    cin >> n >> m >> a;

    unsigned long long amount_w = n/a;
    if (n%a!=0) amount_w++;

    unsigned long long amount_h = m/a;
    if (m%a!=0) amount_h++;

    unsigned long long result = amount_h * amount_w;

    cout << result << endl;
}