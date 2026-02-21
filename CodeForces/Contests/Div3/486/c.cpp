#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef pair<int, int> pii;

typedef vector<int> vi;
typedef vector<vector<int>> vvi;

typedef vector<vector<int>> graph;
typedef vector<pair<vector<int>,int>> wgraph; // (vizinho, peso)


const int INF = 1e9; // Infinito para Inteiros
const ll INFLL = 1e18; // Infinito para Long Long 
const ld EPS = 1e-9; // Tolerância para números de ponto flutuante
const ld PI = acos(-1.0L); // Valor de Pi com máxima precisão

#define DEBUG 1

void solve() {
    int k; 
    if (!(cin >> k)) return;

    map<ll, pair<int, int>> sums_found;
    
    bool found = false;

    for (int i = 1; i <= k; i++) {
        int n; cin >> n;
        vector<ll> v(n);
        ll total_sum = 0;
        
        for (int j = 0; j < n; j++) {
            cin >> v[j];
            total_sum += v[j];
        }

        if (found) continue;

        for (int j = 0; j < n; j++) {
            ll reduced_sum = total_sum - v[j];

            if (sums_found.count(reduced_sum)) {
                pair<int, int> other = sums_found[reduced_sum];
                
                if (other.first != i) {
                    cout << "YES" << endl;
                    cout << other.first << " " << other.second << endl;
                    cout << i << " " << j + 1 << endl;
                    found = true;
                    break;
                }
            } else {
                sums_found[reduced_sum] = {i, j + 1};
            }
        }
    }

    if (!found) {
        cout << "NO" << endl;
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
