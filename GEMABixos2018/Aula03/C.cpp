#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<long long>> cols(m, vector<long long>(n));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> cols[j][i]; // Load columns into arrays

    if(n==1) { // All columns only have one tree -> rules are trivially met
        for(int i = 0; i < m; i++) cout << "S" << endl;
        return 0;
    }

    for(int i = 0; i < m; i++) {
        long long prev = cols[i][0]; // First value in col i
        long long curr = cols[i][1]; // Second value in col i
        string type;
        string result = "S";

        if (curr > prev) type = "asc"; // All the tree heights should be in ascending order
        else if (curr < prev) type = "desc"; // -||- descending order
        else type = "eq"; // -||- equal

        for(int j = 1; j < n; j++) {
            if(result == "N") break;

            curr = cols[i][j];

            if((type == "eq" && curr != prev)
            || (type == "asc" && curr <= prev)
            || (type == "desc" && curr >= prev)) result = "N";

            prev = curr;
        }

        cout << result << endl;
    }

    return 0;
}