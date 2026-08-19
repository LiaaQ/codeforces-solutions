#include <iostream>
#include <vector>

using namespace std;

void fill(int f, int a, vector<int> &v) {
    for(int i = 0; i < a; i++)
        v.push_back(f);
}

int main() {
    int amt, n, k;
    cin >> amt;

    for (int i = 0; i < amt; i++) {
        cin >> n >> k;
        vector<int> v;
        if(n==k) fill(1, k, v);
        else if (2*k > n) {
            fill(1, k-1, v);
            int rem = n - k + 1;
            if (rem<=0 || rem%2==0) {
                cout << "NO" << endl;
                continue;
            }
            v.push_back(rem);
        }
        else if(n%2==0) {
            fill(2, k-1, v);
            int rem = n - (2*(k-1));
            v.push_back(rem);
        } else if (k%2==1) {
            fill(1, k-1, v);
            int rem = n - k + 1;
            v.push_back(rem);
        } else {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for(int num : v) cout << num << " ";
        cout << endl;
    }
}