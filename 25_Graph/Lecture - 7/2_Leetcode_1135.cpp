#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumCost(int n, vector<vector<int>>& connections) {
        vector<int> p(n);
        iota(p.begin(), p.end(), 0);
        sort(connections.begin(), connections.end(), [](auto& a, auto& b) { return a[2] < b[2]; });
        int ans = 0;
        function<int(int)> find = [&](int x) -> int {
            if (p[x] != x) {
                p[x] = find(p[x]);
            }
            return p[x];
        };
        for (auto& e : connections) {
            int x = e[0] - 1, y = e[1] - 1, cost = e[2];
            if (find(x) == find(y)) {
                continue;
            }
            p[find(x)] = find(y);
            ans += cost;
            if (--n == 1) {
                return ans;
            }
        }
        return -1;
    }
};

int main() {
    int n, e;
    cin>>n>>e;
    vector<vector<int>> v(e, vector<int>(3)); //e number of edges and each edge has 3 values src, dest and wt
    for(int i = 0; i < e; i++) {
        cin>>v[i][0]>>v[i][1]>>v[i][2];
    }

    Solution sol;
    cout<<sol.minimumCost(n, v)<<endl;

    return 0;
}



/*input:  
4 6 
1 2 5
1 3 3
2 3 1
1 4 6
2 4 5
3 4 6
output:
9
*/