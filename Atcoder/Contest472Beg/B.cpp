#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> l;
    vector<int> sums;
    int length = 0;
    int ans;

    while(n--) {
        int tmp;
        cin >> tmp;
        l.push_back(tmp);
        length+=tmp;
        sums.push_back(length);
    }
    ans = length;

    for(int i = 0; i < sums.size(); i++) {
        int diff = abs(length - sums[i] - sums[i]);
        if(diff < ans) ans = diff;
    }

    cout << ans;
    return 0;
}