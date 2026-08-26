#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int occurrences[26][26];

int main()
{
    int n;
    string s;
    cin >> n >> s;

    memset(occurrences, 0, sizeof(occurrences));

    for(int i = 0; i < n-1; i++) {
        occurrences[s[i] - 'A'][s[i+1] - 'A']++;
    }

    int highest = 0;
    string result = "";

    for(int i = 0; i < 26; i++) {
        for(int j = 0; j < 26; j++) {
            if(occurrences[i][j] > highest) {
                highest = occurrences[i][j];
                char a = i + 'A';
                char b = j + 'A';
                result = string() + a + b;
            }
        }
    }

    cout << result;

    return 0;
}
