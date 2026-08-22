#include<iostream>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> ans;
    int result = 0;

    while(n--) {
        string s;
        cin >> s;

        std::transform(s.begin(), s.end(), s.begin(), ::tolower);

        ans[s]++;

        if (ans[s] > result) result = ans[s];
    }

    cout << result;

    return 0;
}