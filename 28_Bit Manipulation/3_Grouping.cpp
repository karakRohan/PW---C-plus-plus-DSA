#include <bits/stdc++.h>
using namespace std;

int calc(vector<vector<int>> &compat, int mask) {
    int ans = 0;

    for(int i = 0; i < 16; i++) {
        for(int j = 0; j < 16; j++) {

            if(((mask & (1 << i)) != 0) and ((mask & (1 << j)) != 0)) {
                ans += compat[i][j];
            }

        }
    }

    return ans;
}

int precompute(vector<vector<int>> &compat, int n) {

    for(int mask = 1; mask < (1 << n) - 1; mask++) {
        sums[mask] = calc(compat, mask);
    }
}

int f(vector<vector<int>> &compat, int mask) {

    if(mask == 0) return 0;

    if(dp[mask] != INT_MAX) return dp[mask];

    int ans = 0;

    for(int g = mask; g != 0; g = ((g - 1) & mask)) {
        ans = max(ans, sums[g] + f(compat, mask ^ g));
    }

    return dp[mask] = ans;
}