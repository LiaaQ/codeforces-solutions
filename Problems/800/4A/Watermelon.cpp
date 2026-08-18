#include <iostream>

using namespace std;

int main() {
    int input;
    cin >> input;
    cout << (input % 2 == 0 && input > 2 ? "YES" : "NO") << endl;
}