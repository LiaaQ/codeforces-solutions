#include <iostream>

using namespace std;

int options[4] = {1, 1, 1, 1};

void two_zeros(int pos, char c) {
    if (c == '0' && pos%4 > 1 ) options[0] = 0;
    else if (c == '1' && pos%4 <= 1) options[0] = 0;
}

void one_zero(int pos, char c) {
    if(pos==0) {
        if (c!='0') options[1] = 0;
        return;
    }
    pos--;

    if (c == '1' && pos%4 > 1 ) options[1] = 0;
    else if (c == '0' && pos%4 <= 1) options[1] = 0;
}

void two_ones(int pos, char c) {
    if (c == '1' && pos%4 > 1 ) options[2] = 0;
    else if (c == '0' && pos%4 <= 1) options[2] = 0;
}

void one_one(int pos, char c) {
    if(pos==0) {
        if (c!='1') options[3] = 0;
        return;
    }
    pos--;
    
    if (c == '0' && pos%4 > 1 ) options[3] = 0;
    else if (c == '1' && pos%4 <= 1) options[3] = 0;

    return;
}

int main() {
    int amt, len;
    string s;
    cin >> amt;

    for(int i = 0; i < amt; i++) {
        cin >> len >> s;
        for(int j = 0; j < len; j++) {
            char c = s[j];
            if (c != '?') {
                if (options[0]) two_zeros(j, c);
                if (options[1]) one_zero(j, c);
                if (options[2]) two_ones(j, c);
                if (options[3]) one_one(j, c);
            }
            
            if(!options[0] && !options[1] && !options[2] && !options[3]) break;
        }
        int result = options[0] + options[1] + options[2] + options[3];
        options[0] = options[1] = options[2] = options[3] = 1;
        cout << result << endl;
    }
}