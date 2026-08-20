#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int amt;
        cin >> amt;
        vector<int> candies(amt);
        for(int i = 0; i < amt; i++)
            cin >> candies[i];

        int score_a = 0;
        int score_b = 0;
        int prev = 0;

        for(int i = 0; i < amt; i++) {
            int curr = 0;
            if(i%2==0) { // Alice
                while (curr <= prev && !candies.empty()) {
                    curr+=candies[0];
                    candies.erase(candies.begin());
                }
                score_a += curr;
                prev = curr;
            } else { // Bob
                while (curr <= prev && !candies.empty()) {
                    curr+=candies[candies.size()-1];
                    candies.erase(candies.end());
                }
                score_b += curr;
                prev = curr;
            }

            if(candies.empty()) {
                cout << i+1 << " " << score_a << " " << score_b << endl;
                break;
            }
        }
        }
}