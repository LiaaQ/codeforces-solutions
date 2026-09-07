#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--) {
        int a[2];
        int b[2];
        cin >> a[0] >> a[1] >> b[0] >> b[1];

        int won = 0;
        int lost = 0;

        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                if(a[i] > b[j]) {
                    won++;
                } else if (a[i] < b[j]) lost++;
            }
        }

        if(won <= lost) cout << 0 << endl;
        else if(won == 4 || lost == 0) cout << 4 << endl;
        else cout << 2 << endl;
    }

    return 0;
}