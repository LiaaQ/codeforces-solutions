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
        
        

        for(auto &x : amounts) {

        }

    }

    return 0;
}