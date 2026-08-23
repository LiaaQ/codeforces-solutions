#include<iostream>
#include<string>

using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        if(s.length() == 1 && (s=="B" || s=="R")) {
            cout << "NO" << endl;
            continue;
        }

        if(s.find('R') == string::npos && s.find('B') == string::npos) {
            cout << "YES" << endl;
            continue;
        }

        if(s.find("WBW")!=string::npos || s.find("WRW") != string::npos) {
            cout << "NO" << endl;
            continue;
        }

        if(s.substr(0,2) == "BW" 
        || s.substr(0,2) == "RW" 
        || s.substr(s.length()-2, 2) == "WB" 
        || s.substr(s.length()-2, 2) == "WR") {
            cout << "NO" << endl;
            continue;
        }

        int first_w = s.find_first_of("W");

        if (first_w != string::npos) {
            string tmp = s.substr(0, first_w);
            if((tmp.find('B') == string::npos && tmp.find('R') != string::npos)
            || (tmp.find('R') == string::npos && tmp.find('B') != string::npos)) {
                cout << "NO" << endl;
                continue;
            }
        }


        bool found_err = false;
        for(int i = 0; i < s.length()-2; i++) {
            if(s[i] == 'W') {
                int next_w = s.find_first_of("W", i+1);
                string part;
                if(next_w == string::npos) next_w = s.length()-1;
                part = s.substr(i, next_w-i);
                if( (part.find('B') != string::npos && part.find('R') == string::npos)
                 || (part.find('R') != string::npos && part.find('B') == string::npos)) {
                    cout << "NO" << endl;
                    found_err = true;
                    break;
                } else i = next_w;
            }
        }

        if(!found_err) cout << "YES" << endl;
    }

    return 0;
}