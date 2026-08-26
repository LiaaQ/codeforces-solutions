#include<iostream>
using namespace std;

int myPow(int a, int n) {     
    int result = 1;     
    for (size_t i = 0; i < n; i++)         
        result *= a;

    return result;
}  

int main()
{
    int n,k;
    cin >> n >> k;

    while (k > 0) {
        int remainder = n%10;
        k -= remainder;
        n -= remainder;
        
        if (k == 0) break;
        else if (k < 0) {
            n += abs(k);
            break;
        }

        n/=10;
        k--;
    }

    cout << n;
    
    return 0;
}
