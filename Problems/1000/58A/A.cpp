#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string hello = "hello";
    string result = "NO";
    int pos = 0;

    for(int i = 0; i < s.size(); i++) {
        if (s[i] == hello[pos]) {
            pos++;
        }
        if(pos == 5) {
            result = "YES";
            break;
        }
    }

    cout << result << endl;
    return 0;
}