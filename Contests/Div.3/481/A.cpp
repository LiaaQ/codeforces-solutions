#include<iostream>
#include<cstring>
using namespace std;

int occurrences[1000];
int a[50];

int main()
{
    int n;
    cin >> n;

    memset(occurrences, 0, sizeof(occurrences));

    for(int i = 0; i < n; i++) cin >> a[i];

    int result[50];
    int amount = n;

    for(int i = n-1; i >= 0; i--) {
        if(occurrences[a[i]] > 0) {
            amount--;
        } else {
            occurrences[a[i]]++;
            result[i+n-amount] = a[i];
        }
    }

    cout << amount << endl;

    for(int i = n-amount; i < n; i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}
