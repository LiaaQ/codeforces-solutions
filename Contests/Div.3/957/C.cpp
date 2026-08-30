#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> result;

        for(int i = 0; i <= n-k; i++) {
            result.push_back(n-i);
        }

        for(int i = m+1; i < k; i++) {
            result.push_back(i);
        }

        for(int i = 1; i <= m; i++) {
            result.push_back(i);
        }

        for(int &x : result) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}