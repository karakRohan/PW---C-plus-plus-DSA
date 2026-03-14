#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(ll a, ll b){
    return a > b;
}

ll minCostToBreakGrid(int n, int m, vector<ll> &vertical, vector<ll> &horizontal){

    sort(vertical.begin(), vertical.end(), cmp);
    sort(horizontal.begin(), horizontal.end(), cmp);

    ll ans = 0;
    ll hz = 1, vr = 1;

    int v = 0, h = 0;

    while(v < vertical.size() && h < horizontal.size()){
        if(vertical[v] > horizontal[h]){
            ans += vertical[v] * hz;
            vr++;
            v++;
        }
        else{
            ans += horizontal[h] * vr;
            hz++;
            h++;
        }
    }

    while(v < vertical.size()){
        ans += vertical[v] * hz;
        vr++;
        v++;
    }

    while(h < horizontal.size()){
        ans += horizontal[h] * vr;
        hz++;
        h++;
    }

    return ans;
}

int main(){

    int m, n;
    cin >> m >> n;

    vector<ll> vertical(m-1), horizontal(n-1);

    for(int i = 0; i < m-1; i++){
        cin >> vertical[i];
    }

    for(int i = 0; i < n-1; i++){
        cin >> horizontal[i];
    }

    cout << minCostToBreakGrid(n, m, vertical, horizontal) << endl;

    return 0;
}
