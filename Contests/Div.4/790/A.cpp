#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        int left = s[0] - '0' + s[1] - '0' + s[2] - '0';
        int right = s[3] - '0' + s[4] - '0' + s[5] - '0';

        if(left == right) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
