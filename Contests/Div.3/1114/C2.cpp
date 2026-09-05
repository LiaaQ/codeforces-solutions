#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n;
        string a, b;
        cin >> n >> a >> b;

        pair<int, int> cnt_odd;
        pair<int, int> cnt_even;

        vector<int> positions_odd_a;
        vector<int> positions_even_a;
        vector<int> positions_odd_b;
        vector<int> positions_even_b;

        for(int i = 0; i < n; i++) {
            if(i%2==0) {
                if(a[i] == '1') {
                    cnt_even.first++;
                    positions_even_a.push_back(i);
                }
                if(b[i] == '1') {
                    cnt_even.second++;
                    positions_even_b.push_back(i);
                }
            } else {
                if(a[i] == '1') {
                    cnt_odd.first++;
                    positions_odd_a.push_back(i);
                }
                if(b[i] == '1') {
                    cnt_odd.second++;
                    positions_odd_b.push_back(i);
                }
            }
        }

        long long result = 0;

        if(cnt_odd.first == cnt_odd.second && cnt_even.first == cnt_even.second) {
            for(int i = 0; i < cnt_even.first; i++) result += abs(positions_even_a[i]-positions_even_b[i]);
            for(int i = 0; i < cnt_odd.first; i++) result += abs(positions_odd_a[i]-positions_odd_b[i]);
            cout << result / 2 << endl;
        }
        else cout << -1 << endl;

    }
    
    return 0;
}