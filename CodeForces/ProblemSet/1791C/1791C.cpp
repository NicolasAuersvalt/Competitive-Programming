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

#define DEBUG 1


void solve() {
    int t; cin >> t;
   while(t--){
    int n; cin >> n;
    string a; cin >> a;
    int l = 0, r = n-1;
    int qtd=0;
    while((r-l)>=0){
        if(a[r]!=a[l]){
            qtd++;
        }
        else{
            break;
        }
        r--; l++;
    }
    cout << n - 2*qtd << endl;
   }
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
