#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n,s,m;
        cin >> n >> s >> m;
        vector<pair<int,int>> a(n);

        for(int i = 0; i < n; i++) {
            pair<int, int> tmp;
            cin >> a[i].first >> a[i].second;
        }

        int longest_break = a[0].first;

        for(int i = 1; i < n; i++) {
            int free_time = a[i].first - a[i-1].second;
            if(free_time > longest_break) longest_break = free_time;
            if(longest_break >= s) break;
        }

        if(m-a.back().second > longest_break) longest_break = m-a.back().second;

        if(longest_break >= s) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}