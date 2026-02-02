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
        ll esq=0, dir=0;
        vi vet(n,0);
        for(int i=0; i<n; i++){
            cin >> vet[i];
        }
        int l=0, r=vet.size()-1; // two pointers
        bool alice=true;
        ll lastEsq=0, lastDir=0, moves=0;
        while(r-l>=0){
            #if DEBUG
            //cout << "Moves = " << moves << " Esq =" << esq << " Dir = " << dir << endl;
            #endif
            
            moves++;
            if(alice){
                lastEsq=0;
                //cout << "A" << endl;
                while(lastEsq<=lastDir && r-l>=0){
                    #if DEBUG
                    //cout << "Alice"<< endl;
                    #endif
                    lastEsq += vet[l];
                    l++;
                }
                esq += lastEsq;
                alice = false;
            }
            else{
                lastDir = 0;
                //cout << "B" << endl; 
                while(lastDir<=lastEsq && r-l>=0){
                    //cout << "Bob"<< endl;
                    lastDir += vet[r];
                    r--;
                }
                dir += lastDir;
                alice = true;
            }
        }
        cout << moves << " " <<  esq << " " << dir << endl;
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
