#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int result = 0;

    if(k == n) result = v.back();
    else if(k == 0) result = v.front()-1;
    else if(v[k-1] == v[k]) result = -1;
    else result = v[k-1];

    if (result < 1 || result > 1000000000) cout << -1;
    else cout << result;
    return 0;
}