#include <iostream>
#include <algorithm>

using namespace std;
int arr[3];

int main() {
    int a,b,c, amt;
    cin >> amt;

    for (int i = 0; i < amt; i++) {
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr+3);
        cout << min(arr[2]-arr[0], arr[1]) << endl;
    }
}