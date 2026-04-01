// Question Link :- https://atcoder.jp/contests/dp/tasks/dp_l


#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll dp[3005][3005];
ll arr[3005];

ll f(ll i, ll j){
    if(i == j) return arr[i];

    if(dp[i][j] != -1) return dp[i][j];

    return dp[i][j] = max(arr[i] - f(i+1, j), arr[j] - f(i, j-1));
}


// Bottom up approach
ll fbu(int n){
    memset(dp, 0, sizeof dp);
    // Base case: when i == j, dp[i][j] = arr[i]
    for(int i = 0; i < n; i++){
        dp[i][i] = arr[i];
    }

    for(int len = 2; len <= n; len++){
        for(int i = 0; i <= n - len; i++){
            int j = i + len - 1;
            dp[i][j] = max(arr[i] - dp[i+1][j], arr[j] - dp[i][j-1]);
        }
    }
    return dp[0][n-1];

}

int main(){
    ll n;
    cin >> n;
    for(ll i = 0; i< n; i++){
        cin>> arr[i];
    }
    // memset(dp, -1, sizeof dp);
    // cout << f(0, n-1) << endl;
    cout << fbu(n) << endl;
    return 0;
}


// I/P :- 
// 6
// 4 2 9 7 1 5
// O/P :-
// 2

