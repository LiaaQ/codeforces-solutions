#include <iostream>

using namespace std;

int main() {
    int n;
    int result = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string op;
        cin >> op;
        if(op[1] == '+') result++;
        else result--;
    }
    cout << result << endl;
}