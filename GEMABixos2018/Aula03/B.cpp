#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;

    int sum = 0;
    int prev;
    int curr;

    cin >> prev;

    if(n==1)
    {
        cout << 0;
        return 0;
    }

    while(n--) {
        cin >> curr;
        sum += abs(prev - curr) * 4;
        prev = curr;
    }

    cout << sum;
    return 0;
}
