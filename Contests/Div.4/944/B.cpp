#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        string result = s;

        for(int i = 1; i < s.length(); i++) {
            if(s[i] != s[0]) {
                result[0] = s[i];
                result[i] = s[0];
                break;
            }
        }

        if(s == result) cout << "NO" << endl;
        else cout << "YES" << endl << result << endl;

    }
    return 0;
}