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

#define DEBUG 0

void solve() {
    string s; cin >> s;
    int m; cin >> m;
    while(m--){
        int l, r, k; cin >> l >> r >> k;
        l--; r--; 
        
        int len = r - l + 1;
        k %= len; 
        
        if(k == 0) continue; 
        
        string tail = s.substr(l + len - k, k);
        string head = s.substr(l, len - k);
        
        s.replace(l, len, tail + head);
    }
    cout << s << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #if DEBUG
    cerr << "Debug Ativado" << endl;
    #endif

    solve();

    return 0;
}
