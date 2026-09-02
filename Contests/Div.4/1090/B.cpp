#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--) {
        int a[7];
        int highest_idx = 0;
        int sum = 0;

        for(int i = 0; i < 7; i++) {
            cin >> a[i];
            sum += -a[i];
            if(a[i] >= a[highest_idx]) highest_idx = i;
        }

        sum += a[highest_idx]*2;

        cout << sum << endl;

    }

    return 0;
}