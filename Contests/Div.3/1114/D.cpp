#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<long long> b(n);
        map<long long, long long> amounts;
        map<long long, long long> mapping;

        for(int i = 0; i < n; i++) {
            cin >> b[i];
            amounts[b[i]]++;
        }

        if(amounts[0] == 0) {
            cout << -1 << endl;
            continue;
        }

        long long added = 0;  // sum of all a values processed so far

        for(auto curr = amounts.begin(); curr != amounts.end(); curr++) {

            auto next = curr;
            next++;
            long long a_val = 0;

            if (next != amounts.end()) {
                if((next->first - added) % curr->second != 0) break;
                
                a_val = (next->first - added) / curr->second;
                if(mapping.size() != 0 && a_val <= std::prev(mapping.end(), 1)->second) break;

                mapping[curr->first] = a_val;
            } else {
                if(mapping.size() != 0) {
                    a_val = std::prev(mapping.end(), 1)->second + 1;
                } else {
                    a_val = 1;
                }
                mapping[curr->first] = a_val;
            }
            
            added += curr->second * a_val;
        }

        if(mapping.size() == amounts.size()) {
            for(int i = 0; i < n; i++) {
            long long val = mapping[b[i]];
            cout << val << " ";
            }
        } else cout << -1;
        
        cout << endl;
    }

    return 0;
}