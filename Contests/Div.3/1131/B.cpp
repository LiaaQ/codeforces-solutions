#include<iostream>
using namespace std;

char win(string a) {
    if (a == "yz" || a == "zy") return 'S'; // scissors vs paper
    if (a == "xz" || a == "zx") return 'P'; // rock vs paper
    if (a == "xy" || a == "yx") return 'R'; // rock vs scissors
    if (a == "x") return 'P'; // what wins against rock
    if (a == "y") return 'R'; // what wins against scissors
    if (a == "z") return 'S'; // what wins against paper
    
    return 'n';
}

void print_char(char c, int amt) {
    for(int i = 0; i < amt; i++) {
        cout << c;
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int x, y, z; // x = rock, y = scissors, z = paper
        cin >> x >> y >> z;

        // All numbers are the same
        if (x == y && y == z) {
            print_char('R', x+y+z); // Could be S or P too, doesnt matter
            cout << endl;
            continue;
        }

        // There is a highest number
        if (x > y && x > z) print_char(win("x"), x+y+z);
        else if (y > x && y > z) print_char(win("y"), x+y+z);
        else if (z > x && z > y) print_char(win("z"), x+y+z);
        // Two numbers are the same and them together are the highest number
        else if (x==y) print_char(win("xy"), x+y+z);
        else if (y==z) print_char(win("yz"), x+y+z);
        else print_char(win("xz"), x+y+z);

        cout << endl;

    }
    
    return 0;
}