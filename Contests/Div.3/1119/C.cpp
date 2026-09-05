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
        vector<int> a(n);

        bool first = true;
        int idx_last = -1;

        for(int i = 0; i < n; i++) {
            cin >> a[i];

            if(a[i] == 1) {
                first = false;
                idx_last = i;
            }

            if(a[i] == -1) {
                if(first) {
                    a[i] = 1;
                    first = false; }
                else {
                    idx_last = i;
                    a[i] = 0;
                }
            }
        }
        
        if(idx_last != -1) a[idx_last] = 1;

        for(int &x : a) {
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}
