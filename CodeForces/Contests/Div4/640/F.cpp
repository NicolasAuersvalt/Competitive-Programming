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
        int n0, n1, n2; cin >> n0 >> n1 >> n2;
        string s;
        if(n1 == 0){ // sem trocas
            if(n0){
                s+="00"; n0--;
                for(int i=0; i<n0; i++){
                    s.push_back('0');
                }
            }
            else if(n2){
                s+="11"; n2--;
                for(int i=0; i<n2; i++){
                    s.push_back('1');
                }
            }
        } 
        else{ // com trocas
            int transicao = 0;
            if(n0){
                s+="00"; n0--;
                for(int i=0;i<n0;i++){
                    s += "0";
                }
                transicao+=2;
            }
            // uma troca        
            if(n2){
                s+="11"; n2--;
                for(int i=0;i<n2;i++){
                    s +=  "1";
                }
                transicao+=3;
            }
            if(n1){
                if(transicao==5){
                    n1--;
                }
                else if(transicao==2){
                    s+="1";
                    n1--;
                }
                else if(transicao==3){
                    //s+="0";
                    //n1--;
                }
                else if(transicao==0){
                    s+="01";
                    n1--;
                }
                for(int i=0;i<n1; i++){
                    if(i%2==0){
                        s += "0";
                    }
                    else{
                        s += "1";
                    }
                }
            }
        }
        cout << s << endl;
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
