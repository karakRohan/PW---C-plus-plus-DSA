// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int> f(n+1, 0);
//     int m;
//     cin >> m;
//     vector<int> l(n+1, 0);
//     vector<int> r(n+1, 0);
//     for(int i=0; i<m; i++){
//         int L, R;
//         cin >> L >> R;
//         l[L]++;
//         r[R]++;
//     }
//     f[1] = l[1];
//     for(int i=2; i<=n; i++){
//         f[i] = l[i] - r[i-1] + f[i-1];
//     }
//     vector<int> c(10000005, 0);
//     for(int i=0; i<=n; i++){
//         int coins = f[i];
//         c[coins]++;
//     }
//     // Suffix sum
//     for(int i = c.size() - 2; i >= 0; i--){
//         c[i] = c[i] + c[i+1];
//     }
//     int q;
//     cin >> q;
//     while(q--){
//         int num;
//         cin >> num;
//         cout << c[num] << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int m;
    cin >> m;

    vector<int> l(n+2, 0), r(n+2, 0);

    // Input segments
    for(int i=0; i<m; i++){
        int L, R;
        cin >> L >> R;
        l[L]++;
        r[R]++;
    }

    // Build coverage array
    vector<int> f(n+1, 0);
    f[1] = l[1];
    for(int i=2; i<=n; i++){
        f[i] = f[i-1] + l[i] - r[i-1];
    }

    // Count frequencies
    vector<int> c(m+2, 0);
    for(int i=1; i<=n; i++){
        c[f[i]]++;
    }

    // Suffix sum → count of positions having at least x coverage
    for(int i=m-1; i>=0; i--){
        c[i] += c[i+1];
    }

    int q;
    cin >> q;

    // Answer queries
    while(q--){
        int num;
        cin >> num;

        if(num > m) cout << 0 << endl;
        else cout << c[num] << endl;
    }

    return 0;
}