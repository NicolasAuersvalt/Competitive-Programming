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
        ll sum = 0;
        vi vet(n, 0), diffs(n+1,0);
        for(int i=0; i<n; i++){
            cin >> vet[i];
        }
        for(int i=1; i<n; i++){
            diffs[i] = abs(vet[i-1]-vet[i]); 
        }
        int maxDiff=0, index=-1;
        for(int i=1; i<diffs.size(); i++){
            int res = diffs[i]+diffs[i-1];
            if(res>maxDiff){
                maxDiff=res;
                if(i>1){
                    if(i<diffs.size()){
                        if(vet[i])
                    }
                }
                
            }
        }
        for(int i=0;i<diffs.size(); i++){
            if(i!=index){
                sum+=diffs[i];
            }
        }
        cout << sum << endl;
        
    }
}


int main() {

    solve();

    return 0;
}
