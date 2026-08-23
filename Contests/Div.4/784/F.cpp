#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int t;
    
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> w(n);
        for(int i = 0; i < n; i++) cin >> w[i];

        int alice = 0;
        int bob = 0;

        int alice_idx = 0;
        int bob_idx = n-1;

        int result = 0;

        while(alice_idx <= bob_idx) {
            if(alice < bob) {
                alice += w[alice_idx];
                alice_idx++;
            } else {
                bob += w[bob_idx];
                bob_idx--;
            }

            if (alice == bob) {
                result = alice_idx + n - bob_idx - 1;
            }

            if (alice == bob && alice_idx == bob_idx) break;
        }
        
        cout << result << endl;
    }

    return 0;
}