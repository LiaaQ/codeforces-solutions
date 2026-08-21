#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int l;
        scanf("%d", &l);
        vector<int> v(l);
        vector<int> amt(l+1);
        int result = 0;

        for (int i = 0; i < l; i++) {
            scanf("%d", &v[i]);
            amt[v[i]]++;
        }
            
        for (int i = 0; i < l; i++) {
            int sum = v[i];
            for (int j = i+1; j < l; j++) {
                sum+=v[j];
                if (sum <= l) {
                    result += amt[sum];
                    amt[sum] = 0;
                } else break;
            }
        }
        
        printf("%d\n", result);
    }
}