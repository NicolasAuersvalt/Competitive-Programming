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

ll binary_search_first(vector<ll> &vet, ll value) {
    ll l = 0, r = (ll)vet.size() - 1;
    ll ans = -1;
    
    return ans;
}

void solve() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vi vet(n,0);
        for(int i=0; i<n; i++){
            cin >> vet[i];
        }
        sort(vet.begin(), vet.end());
        int l = vet[0];

        for(int i=0; i<vet.size();i++){

            while (l <= r) {
                ll mid = l + (vet[i] - l) / 2;
                if (vet[mid] == value) {
                    ans = mid;       // encontrou
                    r = mid - 1;     // busca a primeira ocorrência
                } 
                else if (vet[mid] > value) {
                    r = mid - 1;
                } 
                else {
                    l = mid + 1;
                }
            }
        }
        
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
