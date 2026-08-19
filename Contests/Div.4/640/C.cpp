#include <iostream>

using namespace std;

int main() {
    int amt, n, k, result = 0;
    cin >> amt;

    for (int i = 0; i < amt; i++) {
        cin >> n >> k;

        if(k<n) result = k;
        else if(k==n) result = k+1;
        else if(n==2) result = k*n-1;
        else if(k%n==0) {
            result = k + n - 1;
        }
        else {
            int a = k / (n-1);
            int b = k % (n-1);
            result = (n-1)*a + a + b;
        }

        cout << result << endl;
        result = 0;
    }
}