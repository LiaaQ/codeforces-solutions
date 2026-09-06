#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> amounts;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            amounts[a[i]]++;
        }
        
        if(amounts[0] == 1) {
            cout << "NO" << endl;
            continue;
        } else cout << "YES" << endl;

        char last = 'B';

        for(int i = 0; i < n; i++) {
            if(a[i] == 0) {
                if(last == 'B') {
                    cout << 'A';
                    last = 'A';
                } else {
                    cout << 'B';
                    last = 'B';
                }
            } else cout << 'C';
        }

        cout << endl;
    }

    return 0;
}