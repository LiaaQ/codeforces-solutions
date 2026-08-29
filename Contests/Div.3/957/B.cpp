#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(k);

        for(int i = 0; i < k; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<>());

        int result = 0;

        for(int i = 1; i < k; i++) {
            if(a[i] == 1) {
                result += k - i;
                break;
            }

            result += 2*a[i] - 1;
        }

        cout << result << endl;
    }

    return 0;
}