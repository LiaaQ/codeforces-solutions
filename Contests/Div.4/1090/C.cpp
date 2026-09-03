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

        vector<int> v;

        for(int i = 0; i < n; i++) {
            v.push_back(i + 1);
            v.push_back(3*n - 2*i - 1);
            v.push_back(3*n - 2*i);
        }

        for(int &x : v) {
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}
