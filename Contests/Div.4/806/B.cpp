#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int arr[27];

    memset(arr, 0, sizeof(arr));

    while(t--) {
        int n;
        string s;
        cin >> n >> s;
        memset(arr, 0, sizeof(arr));

        for(int i = 0; i < n; i++) {
            if(arr[s[i] - 'A'] == 0) {
                arr[s[i] - 'A'] = 2;
            } else arr[s[i] - 'A']++;
        }

        int sum = 0;

        for(int i = 0; i < 27; i++) {
            sum += arr[i];
        }

        cout << sum << endl;
    }

    return 0;
}