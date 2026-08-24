#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> v(m);

        for(int i = 0; i < n; i++) {
            string s;
            cin >> s;
            for(int j = 0; j < m; j++) {
                v[j].push_back(s[j]);
            }
        }

        vector<string> columns(m);

        for(int i = 0; i < m; i++) {
            int stone_cnt = 0;
            string line = "";
            for(int j = 0; j < n; j++) {
                char c = v[i][j];
                if(c == 'o') {
                    line += 'o';
                    if(stone_cnt > 0) {
                        line.replace(j-stone_cnt, stone_cnt, stone_cnt, '*');
                    }
                    stone_cnt = 0;
                    continue;
                }
                else if (c == '*') stone_cnt++;
                
                line += '.';
            }

            if(stone_cnt > 0) {
                if(stone_cnt > 0) {
                        line.replace(n-stone_cnt, stone_cnt, stone_cnt, '*');
                    }
            }
            columns[i] = line;
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cout << columns[j][i];
            }
            cout << endl;
        }

        cout << endl;
    }

    return 0;
}