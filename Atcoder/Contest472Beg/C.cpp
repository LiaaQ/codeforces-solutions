#include<iostream>
#include<vector>

using namespace std;

int main()
{
    long n,m,k;
    vector<long> a;
    vector<long> eaten;
    cin >> n >> m >> k;

    long recent_count = 0;

    for(int i = 0; i < n; i++) {
        long tmp;
        cin >> tmp;
        a.push_back(tmp);
        eaten.push_back(1);
    }

    for (int i = 0; i < m; i++) {
        if(recent_count + a[i] <= k) {
            recent_count += a[i];
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
            eaten[i] = 0;
        }
    }

    for(int i = m; i < n; i++) {
        recent_count -= a[i-m] * eaten[i-m];
        recent_count = max(recent_count, long(0));

        if(recent_count + a[i] <= k) {
            recent_count += a[i];
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
            eaten[i] = 0;
        }
    }

    return 0;
}