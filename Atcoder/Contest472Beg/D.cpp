#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int h,w,k;
    cin >> h >> w >> k;

    vector<string> s;
    for(int i = 0; i < h; i++) {
        string tmp;
        cin >> tmp;
        s.push_back(tmp);
    }
    return 0;
}