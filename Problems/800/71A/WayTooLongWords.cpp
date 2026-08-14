#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    vector <string> words;
    
    cin >> n;
    words.resize(n);
    
    for(int i = 0; i < n; i++) {
        cin >> words[i];
        if(words[i].length() > 10) {
            string newword = words[i][0] + to_string(words[i].length()-2) + words[i].back();
            words[i] = newword;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }
}
