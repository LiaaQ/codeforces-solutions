#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int n, l;
    vector<int> a;
    cin >> n >> l;

    while(n--) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    sort(a.begin(), a.end());

    double furthest = 0;

    for(double i = 0; i < a.size()-1; i++) {
        double d = abs(a[i] - a[i+1]);
        if(d > furthest) furthest = d;
    }

    double distance = furthest / 2.0;

    if(distance < l - a.back() || distance < a.front()) {
        distance = max(l-a.back(), a.front());
    }

    cout << fixed << setprecision(10) << distance << endl;

    return 0;
}