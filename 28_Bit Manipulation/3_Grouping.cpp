/*

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int calc(vector<vector<int>> &compat, int mask) {
    int ans = 0;

    for(int i = 0; i < 16; i++) {
        for(int j = i+1; j < 16; j++) {

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

int main() {

    int n;
    cin >> n;

    vector<vector<int>> compat(n, vector<int>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> compat[i][j];
        }
    }
    precompute(compat, n);
    cout << f(compat, ((1 << n) - 1));

    return 0;
}

*/

// question link: https://atcoder.jp/contests/dp/tasks/dp_u
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

vector<ll> sums(1 << 16);
vector<ll> dp(1 << 16, LLONG_MAX);

ll calc(vector<vector<ll>> &compat, ll mask) {

    ll ans = 0;

    for(ll i = 0; i < 16; i++) {

        for(ll j = i + 1; j < 16; j++) {

            if(((mask & (1 << i)) != 0) and ((mask & (1 << j)) != 0)) {
                ans += compat[i][j];
            }

        }
    }

    return ans;
}

void precompute(vector<vector<ll>> &compat, ll n) {

    for(ll mask = 1; mask < (1 << n); mask++) {
        sums[mask] = calc(compat, mask);
    }
}

ll f(vector<vector<ll>> &compat, ll mask) {

    if(mask == 0) return 0;

    if(dp[mask] != LLONG_MAX)
        return dp[mask];

    ll ans = 0;

    for(ll g = mask; g != 0; g = ((g - 1) & mask)) {
        ans = max(ans, sums[g] + f(compat, mask ^ g));
    }

    return dp[mask] = ans;
}

int main() {

    ll n;
    cin >> n;

    vector<vector<ll>> compat(n, vector<ll>(n));

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            cin >> compat[i][j];
        }
    }

    precompute(compat, n);

    dp[0] = 0;

    cout << f(compat, (1 << n) - 1);

    return 0;
}