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
        string s; cin >> s;
        bool valid = true;
        if(s.size()%2==0){
            for(int i=0; i<(s.size()/2); i++){
                if(s[i]!=s[s.size()/2 + i]){
                    cout << "NO" << endl;
                    valid = false;
                    break;
                }
            }
            if(valid){
                cout << "YES" << endl;
            }
            
        }
        else{
            cout << "NO" << endl;
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
