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
    int n, qtd=0;
    long long sum =0;
    cin >> n;
    vi vet(n,0);
    for(int i=0; i<n; i++){
        cin >> vet[i];
        sum+=vet[i];
    }
    long long mean=sum/n;
    int rest = sum % n;
    sort(vet.begin(), vet.end());
    int alvo = 0;
    for(int i=0; i<n; i++){
        if(i<n-rest){
            alvo = mean;
        }
        else{
            alvo = mean + 1;
        }
        if(vet[i]>alvo){
            qtd += vet[i]-alvo;
        }
    }
    cout << qtd << endl;
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
