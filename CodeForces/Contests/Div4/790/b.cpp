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
        ll min = INF;
        bool diff=false;
        int n; cin >> n;
        ll sum = 0;
        for(int i=0; i<n; i++){
            int a; cin >> a;
            if(i==0){min = a;}
            else if(a!=min){diff=true;}
            if(a<min){
                min = a;
            }
            sum+=a;
        }
        if(diff){
            cout << sum - (n*min)<< endl;;
        }
        else{
            cout << 0 << endl;
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
