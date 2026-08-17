#include <iostream>

using namespace std;

int main() {
    int amt, result = 0, val;
    cin >> amt;
    
    
    for (int i = 0; i < amt; i++) {
        cin >> val;
        if(val%2==0) result++;
    }
    
    cout << result << endl;
}