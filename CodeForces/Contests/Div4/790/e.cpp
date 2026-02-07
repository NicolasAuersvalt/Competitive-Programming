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
        int n, q; cin >> n >> q;
        vi vet(n,0);
        for(int i=0; i<n; i++){
            cin >> vet[i];
        }
        sort(vet.begin(), vet.end());
        reverse(vet.begin(), vet.end());
        if(vet.size()!=1){

            for (int i = 1; i < vet.size(); i++) {
                vet[i] += vet[i - 1];
            }

        }
        while (q--) {
            int val;
            cin >> val;

            auto it = lower_bound(vet.begin(), vet.end(), val);

            if (it != vet.end()) {
                int pos = it - vet.begin();
                cout << pos +1 << endl;   
            } else {
                cout << -1 << endl;
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
