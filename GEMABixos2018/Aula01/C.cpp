#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int size = n*m;

    if(size % 2 == 0) cout << size/2 << endl;
    else cout << (size/2)+1 << endl;
}