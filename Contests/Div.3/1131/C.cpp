#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> big_num_pos;
        int sum = 0;
        int big_num_sum = 0;
        int result;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum+=x;
            if(x != 1) {
                big_num_sum += x;
                big_num_pos.push_back(i);
            }
        }

        if (big_num_sum == 0) {
            cout << -1 << endl;
            continue;
        }
        else if(big_num_pos.size() == 1 && 
          (big_num_pos[0] == 0 || big_num_pos[0] == n-1)) {
            result = big_num_sum;
          }
        else if(big_num_pos.size() == 2 &&
               (big_num_pos[0] == 0 && big_num_pos[1] == n-1)) {
                result = big_num_sum - 1;
               }
        else result = sum - 1;

        cout << result << endl;
        
    }
    return 0;
}