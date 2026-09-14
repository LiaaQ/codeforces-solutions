#include<iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while(T--) {
        string s, t;
        cin >> s >> t;

        int idx = 0;
        string result;

        for(int i = 0; i < s.length(); i++) {
            if(idx <= t.length()-1) { // We don't have all the characters yet
                if (s[i] == t[idx]) idx++; // current character fulfilled what we needed
                else if (s[i] == '?') { // we can fulfill what we need
                    result += t[idx];
                    idx++;
                    continue;
                } 
                result += s[i];
            } else {
                if(s[i] == '?') result += 'a';
                else result += s[i];
            }
            
        }

        if(idx != t.length()) {
            cout << "NO" << endl;
            continue;
        } else {
            cout << "YES" << endl << result << endl;
        }
    }

    return 0;
}