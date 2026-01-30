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
    string a;
    cin >> a;
    // .      0
    // -.     1
    // --     2
    string b; 
    if(a.size()==1){
        cout << "0" << endl;
        return;
    }
    while(a.size()>0){
        //cout << a << endl;
        int qtd=1;
        if(a[0]=='-' && a[1]=='.'){ // 1
            b.push_back('1'); qtd++;
        }
        else if(a[0]=='-' && a[1]=='-'){
            b.push_back('2'); qtd++;
        }
        else{
            b.push_back('0');
        }
        a.erase(0,qtd);
    }
    cout << b << endl;
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
