#include <iostream>
#include <map>

using namespace std;

int main() {
    int amt, result = 0, result_amt = 0;
    string val;
    map<int, int> counts;

    cin >> amt;

    for (int i = 0; i < amt; i++) {
        cin >> val;
        counts[val.size()]++;

        if (counts[val.size()] > result_amt){
            result_amt = counts[val.size()];
            result = val.size();
        }
    }
    cout << result << endl;
}