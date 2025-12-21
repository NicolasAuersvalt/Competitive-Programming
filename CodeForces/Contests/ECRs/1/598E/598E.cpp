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

int memo[31][31][51];

#define DEBUG 0

int cuts(int n, int m, int k) {
    if (k == 0 || k == n * m) return 0;
    if (k > n * m) return INF;
    if (memo[n][m][k] != -1) return memo[n][m][k];
    int ans = INF;
    for (int i = 1; i <= n / 2; i++) { 
        for (int x = 0; x <= k; x++) {
            int val = m*m + cuts(i, m, x) + cuts(n - i, m, k - x);
            ans = min(ans, val);
        }
    }

    for (int j = 1; j <= m / 2; j++) {
        for (int x = 0; x <= k; x++) {
            int val = n*n + cuts(n, j, x) + cuts(n, m - j, k - x);
            ans = min(ans, val);
        }
    }

    return memo[n][m][k] = ans;
}

void solve() {
    int t; 
    cin >> t;
    while(t--){
        int n, m, k; 
        cin >> n >> m >> k;
        cout << cuts(n, m, k) << endl;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(memo, -1, sizeof(memo)); 
    #if DEBUG
    cerr << "Debug Ativado" << endl;
    #endif

    solve();

    return 0;
}
