#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<long long> a(n); // Amt of rooms in each dorm
    vector<long long> b(m); // Letters
    vector<pair<long long, long long>> result;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // Instead of 10 15 12 we want 10 25 37
    for(int i = 1; i < n; i++) {
        a[i] += a[i-1];
    }

    for(int i = 0; i < m; i++) {
        auto it = lower_bound(a.begin(), a.end(), b[i]);
        long long dorm = it - a.begin();
        long long previousRooms = dorm == 0 ? 0 : a[dorm - 1];
        result.push_back({dorm + 1, b[i] - previousRooms});
    }

    for(auto &pair : result) {
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}