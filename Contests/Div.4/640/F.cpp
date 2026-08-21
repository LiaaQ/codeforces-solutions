#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n0, n1, n2;
        cin >> n0 >> n1 >> n2;

        string result = "";

        if(n0>0 && n2>0) n1--;
        else if (n0==0 && n2==0) n1++;

        if(n2>0) {
            result += "1";
            while(n2--){
            result+="1";
            }
        }

        if(n0>0) {
            result += "0";
            while(n0--){
                result+="0";
            }
        }

        if (result.empty() || result.back() == '0') {
            for(int i = 0; i < n1; i++) {
                if(i%2==0) result+="1";
                else result+="0";
            }
        } else {
            for(int i = 0; i < n1; i++) {
                if(i%2==0) result+="0";
                else result+="1";
            }
        }
        
        cout << result << endl;
    }
}