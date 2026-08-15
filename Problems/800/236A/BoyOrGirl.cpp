#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    set<char> count;
    string input;
    cin >> input;

    for (char c : input) count.insert(c);

    if (count.size() % 2 != 0) cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl;
}