#include <iostream>
#include <string>
#include <vector>

using namespace std;

int count_digits(int number) {
    string s = to_string(number);
    return s.length();
}

int main() {
    int amt, val, m = 10;
    vector<int> parts;
    cin >> amt;

    for(int i = 0; i < amt; i++) {
        cin >> val;
        int n_digits = count_digits(val);

        for (int j = 0; j < n_digits; j++) {
            int digit = val%m;
            if(digit%m!=0) {
                parts.push_back(digit);
                val-=digit;
            }
            m*=10;
        }

        cout << parts.size() << endl;
        for(int d : parts) {
            cout << d << " ";
        }
        cout << endl;
        parts.clear();
        m = 10;
    }
}