#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n,k;
        string s;
        cin >> n >> k >> s;

        int result = 0;
        bool has_to = true;

        for(int i = 0; i < n / k; i++) {
            for(int j = 0; j < k; j++) {
                if(s[i * k + j] == '0') {
                    has_to = false;
                    break;
                }
            }

            if(has_to) result+=1;
            has_to = true;
        }

        cout << result << endl;
    }

    return 0;
}