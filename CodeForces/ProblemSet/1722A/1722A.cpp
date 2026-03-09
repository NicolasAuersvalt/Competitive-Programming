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
        bool valid = true;
        string vale = "Timur";
        int a; cin >> a;
        string s; cin >> s;
        if(s.size()!=vale.size()){
            cout << "NO" << endl;
        }
        else{
            int i;
            for(i=0; i<s.size(); i++){
                size_t pos = vale.find(s[i]);
                if (pos == string :: npos){
                    cout << "NO" << endl; 
                    valid = false;
                    break;
                }
                else{
                    vale.erase(pos,1); 
                } 
            }
            if(valid){
                cout << "YES" << endl;
            }
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
