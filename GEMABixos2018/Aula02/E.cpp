#include <iostream>

using namespace std;

int main(){
    int amt, count = 0;
    string word;
    cin >> amt >> word;

    for (int i = 1; i <= amt / 2; i++) {
        if(word[i-1] != word[amt-i]) count++;
    }

    cout << count << endl;
}