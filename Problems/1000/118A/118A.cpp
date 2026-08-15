#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string input, result = "";
    set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
    cin >> input;

    for(char &c : input) {
        if(vowels.count(c)) continue;

        result += ".";
        result += tolower(c);
    }

    cout << result << endl;
}