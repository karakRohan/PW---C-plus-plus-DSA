// // question :- https://www.spoj.com/problems/MIXTURES/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll dp[105][105];
ll sum[105][105]; // precomputed sum

// fast g() using precomputed sum
ll g(int i, int j){
    return sum[i][j];
}

ll f(vector<int> &colors, int i, int j){
    if(i == j) return 0;

    if(dp[i][j] != -1) return dp[i][j]; // memoization

    ll result = LLONG_MAX;

    for(int k = i; k <= j-1 ; k++){
        result = min(result,
                     f(colors, i, k) +
                     f(colors, k+1, j) +
                     g(i, k) * g(k+1, j));
    }

    return dp[i][j] = result;
}

// Bottom up approach
ll fbu(vector<int> &colors){
    
}

int main(){

    int n;
    while(cin >> n){
        vector<int> colors;

        for(int i = 0; i<n; i++){
            int x;
            cin >> x;
            colors.push_back(x);
        }

        // dp reset
        memset(dp, -1, sizeof(dp));

        // precompute sum[i][j]
        for(int i = 0; i < n; i++){
            sum[i][i] = colors[i] % 100;
            for(int j = i+1; j < n; j++){
                sum[i][j] = (sum[i][j-1] + colors[j]) % 100;
            }
        }

        cout << f(colors, 0, n-1) << endl;
        colors.clear();
    }

    return 0;
}