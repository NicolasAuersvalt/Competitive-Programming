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
        int n, m; cin >> n >> m;
        graph mat(n,vi(m,0));
        graph nueva(n,vi(m,0));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> mat[i][j];
            }
        }
        
        int max = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){

                // 45°
                nueva[i][j] += mat[i][j];

                int k = i - 1, l = j + 1;
                while(k >= 0 && l < m){
                    nueva[i][j] += mat[k][l];
                    k--; l++;
                }

                // 135°
                k = i - 1; l = j - 1;
                while(k >= 0 && l >= 0){
                    nueva[i][j] += mat[k][l];
                    k--; l--;
                }

                // 225°
                k = i + 1; l = j - 1;
                while(k < n && l >= 0){
                    nueva[i][j] += mat[k][l];
                    k++; l--;
                }

                // 315°
                k = i + 1; l = j + 1;
                while(k < n && l < m){
                    nueva[i][j] += mat[k][l];
                    k++; l++;
                }

                if(nueva[i][j] > max){
                    max = nueva[i][j];
                }
            }
        }   
        cout << max << endl;     
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
