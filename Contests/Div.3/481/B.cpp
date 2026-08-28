#include<iostream>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;

    int counter = 0;
    int result = 0;

    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'x') {
            counter++;
        } else counter = 0;
        if(counter==3) {
            counter--;
            result++;
        }

    }

    cout << result << endl;
    
    return 0;
}