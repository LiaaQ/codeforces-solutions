#include <iostream>
#include <string>

using namespace std;

int main() {
    string string1, string2;
    cin >> string1 >> string2;

    for (char &c : string1) c = tolower(c);
    for (char &c : string2) c = tolower(c);

    int value = string1.compare(string2);
    
    if (value != 0) cout << value/abs(value) << endl;
    else cout << 0 << endl;
}