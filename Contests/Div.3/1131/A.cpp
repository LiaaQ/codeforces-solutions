#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool find_char_delete(string &s, char c) {
    std::size_t found = s.find(c);

    if(found == string::npos) return false;

    s.erase(found, 1);
    return true;
}

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        string p, q;
        string result = "YES";
        cin >> n >> m >> p >> q;

        if(n-m != 3) {
            cout << "NO" << endl;
            continue;
        }

        sort(p.rbegin(), p.rend());
        sort(q.rbegin(), q.rend());

        if(!find_char_delete(p, 's')) result = "NO";
        if(!find_char_delete(p, 'i')) result = "NO";
        if(!find_char_delete(p, 'x')) result = "NO";
        if(result == "NO") {
            cout << result << endl;
            continue;
        }
        
        if(p != q) result = "NO";

        cout << result << endl;
    }
    
    return 0;
}