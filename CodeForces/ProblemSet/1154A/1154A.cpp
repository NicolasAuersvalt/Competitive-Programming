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

#define DEBUG 0

void solve() {
    vi vet(4,0);
    //cout << "A "<< endl;
    for(int i=0; i<vet.size(); i++){
        cin >> vet[i];
    }
    //cout << "B "<< endl;
    sort(vet.begin(), vet.end());
    multiset<int> res;
    //cout << "C "<< endl;
    //res.insert(vet[2]-vet[1]);
    //cout << "D "<< endl;
    res.insert(vet[3]-vet[2]);
    res.insert(vet[3]-vet[1]);
    //cout << "E "<< endl;
    res.insert(vet[3]-vet[0]);
    //cout << "F "<< endl;
    for (auto it = res.begin(); it != res.end(); it++) {
        cout << *it << " ";
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
