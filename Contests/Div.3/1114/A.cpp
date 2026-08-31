#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--) {
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        
        int result = 10;
        sort(v.begin(), v.end());
        if(v[1] - v[0] < result) result = v[1] - v[0];
        if(v[2] - v[1] < result) result = v[2] - v[1];

        cout << result << endl;
    }

    return 0;
}