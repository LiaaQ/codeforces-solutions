#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n,m;
        cin >> n >> m;
        vector<bool> visited(n+1, false);
        vector<vector<int>> adj(n+1);
        vector<int> path;
        stack<int> st;

        while(m--) {
            int a,b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        int src = 1;
        st.push(src);

        while(!st.empty()) {
            int curr = st.top();
            st.pop();

            if (visited[curr]) continue;

            visited[curr] = true;
            path.push_back(curr);

            if(path.size() == 3) {
                cout << 3 << endl;
                for(int x : path) {
                    cout << x << " ";
                }
                cout << endl;
                break;
            }

            vector<int>& neighbors = adj[curr];
            for(int i = neighbors.size()-1; i >=0; i--) {
                if(!visited[neighbors[i]]) st.push(neighbors[i]);
            }
        }

        if(path.size()!=3) {
            cout<<-1<<endl;
        }
    }

    return 0;
}