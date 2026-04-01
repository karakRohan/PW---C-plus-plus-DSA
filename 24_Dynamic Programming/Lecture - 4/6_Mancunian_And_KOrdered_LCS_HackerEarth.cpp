// Question Link :- https://www.hackerearth.com/problem/algorithm/mancunian-and-k-ordered-lcs-e6a4b8c6/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll dp[2005][2005][8];

ll korderedLCS(int *a, int *b, int n, int m, int i, int j, int k) {
    
    // Base case
    if (i == n || j == m) {
        return 0;
    }

    // Memoization check
    if (dp[i][j][k] != -1) {
        return dp[i][j][k];
    }

    ll res = 0;

    // If elements match
    if (a[i] == b[j]) {
        res = 1 + korderedLCS(a, b, n, m, i + 1, j + 1, k);
    } 
    else {
        // If we can still change elements (k > 0)
        if (k > 0) {
            res = 1 + korderedLCS(a, b, n, m, i + 1, j + 1, k - 1);
        }

        // Skip one element from either array
        res = max(res, korderedLCS(a, b, n, m, i + 1, j, k));
        res = max(res, korderedLCS(a, b, n, m, i, j + 1, k));
    }

    // Store result
    dp[i][j][k] = res;
    return res;
}
