#include <iostream>
#include <string>
#include <map>

using namespace std;

string getString(char c, int count) {
    string tmp;
    for(int i = 0; i < count; i++) {
        tmp += c;
        tmp += '+';
    }
    return tmp;
}

int main() {
    string input, result;
    map <char, int> count = {
        {'1', 0},
        {'2', 0},
        {'3', 0}
    };

    cin >> input;

    for (char &c : input) {
        if (c == '+') continue;
        else count[c]++;
    }

    for (auto &pair : count) result += getString(pair.first, pair.second);

    result.erase(result.size() - 1);

    cout << result << endl;
}