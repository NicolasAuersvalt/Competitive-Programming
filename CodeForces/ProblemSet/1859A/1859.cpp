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
        vi vet(n,0);
        for(int i=0;i<n;i++){
            cin >> vet[i];
        }

        vi b, c;
        sort(vet.begin(), vet.end());
        int qtd=0;
        for(int i=0; i<n; i++){
            if(vet[i]==vet[0]){
                b.push_back(vet[i]);
            }
            else{
                c.push_back(vet[i]);
            }
        }
        if(b.size()==0 || c.size()==0){
            cout << "-1" << endl;
        }
        else{
            cout << b.size() << " " << c.size() << endl;
            for(int i=0; i<b.size(); i++){
                cout << b[i] << " ";
            }   
            cout << endl;
            for(int i=0; i<c.size(); i++){
                cout << c[i] << " ";
            }
            cout << endl;
        }
    }
}


int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);

    #if DEBUG
    cerr << "Debug Ativado" << endl;
    #endif

    solve();

    return 0;
}
