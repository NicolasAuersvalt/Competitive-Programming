#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef pair<int, int> pii;

typedef vector<int> vi;
typedef vector<vector<int>> vvi;

typedef vector<vector<int>> graph;
typedef vector<vector<pair<int,int>>> wgraph; // (vizinho, peso)


const int INF = 1e9; // Infinito para Inteiros
const ll INFLL = 1e18; // Infinito para Long Long 
const ld EPS = 1e-9; // Tolerância para números de ponto flutuante
const ld PI = acos(-1.0L); // Valor de Pi com máxima precisão

ll s_n(ll n){
    return n * (n + 1) / 2;
}

void solve() {
    ll t; 
    cin >> t;
    while (t--) {
        ll n; 
        cin >> n;
        ll k = 0;
        while ((1LL << k) <= n) k++;
        k--;  
        ll sum_powers = (1LL << (k + 1)) - 1;

        cout << s_n(n) - 2 * sum_powers << '\n';
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
