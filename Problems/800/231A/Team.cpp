#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int agreed = 0;
        for(int j = 0; j < 3; j++) {
            int val;
            cin >> val;
            agreed+=val;
        }
        if (agreed>=2) count++;
    }
    
    cout << count << endl;
}
