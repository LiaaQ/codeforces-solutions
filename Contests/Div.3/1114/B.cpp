#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        string compressed = string() + s[0];
        char last = s[0];

        for(int i = 1; i < n; i++) {
            if(s[i] == last) continue;
            
            last = s[i];
            compressed += s[i];
        }        

        int result = compressed.size();
        bool reduce = false; // To see if there are 3 characters next to each other that are all different. If yes, then we will for sure be able to reduce 1 from the result.

        if (compressed.size() == 1) result = 1;
        else if (compressed.size() == 2) result = 2;
        else {
            for(int i = 1; i < n-1; i++) {
                if(s[i-1] == s[i+1] && s[i] != s[i-1]) {
                    result-=2;
                    break;
                }
                else if(s[i-1] != s[i] && s[i] != s[i+1] && s[i-1] != s[i+1]) reduce = true; // a sequence of 3 characters that are all different.
            }
        }

        if(result != compressed.size()-2 && reduce) result -= 1;

        cout << result << endl;
    }

    return 0;
}