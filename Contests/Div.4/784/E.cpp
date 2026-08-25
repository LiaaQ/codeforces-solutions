#include<iostream>
#include<map>
#include<string>
using namespace std;

string v[100000];
char characters[11] = {'a','b','c','d','e','f','g','h','i','j','k'};

void add_counts(string except, map<string, int> &m) {
    string s = string() + except[0] + 'x';
    for(char &x : characters) {
        s[1] = x;
        if(s!=except) m[s]++;
    }

    s = string() + 'x' + except[1];

    for(char &x : characters) {
        s[0] = x;
        if(s!=except) m[s]++;
    }
    
}

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        long long ans = 0;
        map<string, int> m;

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for(int i = n - 1; i >= 0; i--) {
            add_counts(v[i], m);
            ans+=m[v[i]];
        }

        cout << ans << endl;
    }
    return 0;
}