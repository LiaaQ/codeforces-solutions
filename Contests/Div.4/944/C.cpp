#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

string position(int num, vector<int> v) {
    if(num < v[0] || num > v[1]) return "above";
    else return "under";
}

int main()
{
    int t;
    cin >> t;

    while(t--) {
        vector<int> a(2);
        vector<int> b(2);
        cin >> a[0] >> a[1] >> b[0] >> b[1];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if(position(b[0], a) != position(b[1], a)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}