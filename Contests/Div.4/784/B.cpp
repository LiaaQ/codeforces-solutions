#include<iostream>
#include<map>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        map<int, int> a;
        while(n--) {
            int tmp;
            cin >> tmp;
            a[tmp]++;
        }
        bool b = false;
        for(auto const& x : a) {
            if(x.second >= 3) {
            cout << x.first;
            b = true;
            break;
            }   
        }

        if (!b) cout << -1;
        cout << endl;
        }

    return 0;
}