#include <iostream>

using namespace std;

int main() {
    long long n, k, result = 0;
    cin >> n >> k;

    if (k == 1) result = 1;
    else if(k%2 != 0 || k == 0) result = 0;
    else {
        result += (n-1) / 4;
        long long mod = (n-1) % 4;
        if(k == 2 && mod >= 0) result++;
        else if (k == 4 && mod >= 2) result++;
        else if (k == 8 && mod >= 3) result++;
    }

    cout << result << endl;
}