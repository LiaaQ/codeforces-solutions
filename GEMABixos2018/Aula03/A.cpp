#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int a, b;

    for(int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            if(x == 0) {
                a = i;
                b = j;
            }
        }

    cout << a << " " << b;
    return 0;
}