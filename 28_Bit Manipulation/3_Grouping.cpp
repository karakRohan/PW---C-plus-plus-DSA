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

