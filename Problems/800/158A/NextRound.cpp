#include <iostream>

using namespace std;

int main() {
    int n, k;
    int count = 0;
    int score = 0;
    int minScore = 0;
    
    cin >> n >> k;
    
    for(int i = 1; i <= k; i++) {
        cin >> score;
        if(score == 0) {
            cout << count << endl;
            return 0;
        }
        count++;
    }

    minScore = score;
    
    for(int i = k; i < n; i++) {
        cin >> score;
        if(score == minScore && score != 0) count++;
        else break;
    }

    cout << count << endl;
}