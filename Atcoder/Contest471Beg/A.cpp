#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if(a+b==9 || a-b == 9 || a*b == 9 || (a/b == 9 && a%b==0)) cout << "Nine";
    else cout << "Nein";

    return 0;
}