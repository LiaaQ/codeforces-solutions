#include<iostream>
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

        for(int i = 0; i < n; i++) {
            if(i%2==0) {
                if(a[i] == '1') cnt_even.first++;
                if(b[i] == '1') cnt_even.second++;
            } else {
                if(a[i] == '1') cnt_odd.first++;
                if(b[i] == '1') cnt_odd.second++;
            }
        }

        if(cnt_odd.first != cnt_odd.second || cnt_even.first != cnt_even.second) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}