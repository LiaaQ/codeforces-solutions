#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int a[50];

        int parity_odd = 0;
        int parity_even = 0;

        for(int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            a[i] = tmp;
        }

        if(a[0]%2==1) parity_odd = 1;
        if(a[1]%2==1) parity_even = 1;

        for(int i = 2; i < n; i++) {
            int par = a[i]%2;
            if(i%2==1) {
                if(par != parity_even) {
                    cout << "NO" << endl;
                    parity_even = -1;
                    break;
                }
            }
            else {
                if(par != parity_odd) {
                    cout << "NO" << endl;
                    parity_odd = -1;
                    break;
                } 
            }
        }

        if(parity_even != -1 && parity_odd != -1) cout << "YES" << endl;

    }

    return 0;
}