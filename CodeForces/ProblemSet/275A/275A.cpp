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
    graph mat(3,vi(3,1));
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int a; cin >> a;
            a = a % 2;
            if(a>0){
                if(i<2){
                    mat[i+1][j]+=a;
                    mat[i+1][j]%=2;
                }
                if(i>0){
                    mat[i-1][j]+=a;
                    mat[i-1][j]%=2;
                }
                if(j>0){
                    mat[i][j-1]+=a;
                    mat[i][j-1]%=2;
                }
                if(j<2){
                    mat[i][j+1]+=a;
                    mat[i][j+1]%=2;
                }
            }
            mat[i][j]+=a;
            mat[i][j]%=2;
        }
    }


    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << mat[i][j];
        }
        cout << endl;
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
