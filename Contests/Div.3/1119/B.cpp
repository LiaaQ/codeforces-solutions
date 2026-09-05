#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int odd = 0;
        int even_remainder_0 = 0;
        int even_remainder_2 = 0;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if(x % 2 == 1) {
                odd++;
            } else if(x % 4 == 0) {
                even_remainder_0++;
            } else {
                even_remainder_2++;
            }
        }

        cout << max({odd, even_remainder_0, even_remainder_2}) << endl;

    }

    return 0;
}