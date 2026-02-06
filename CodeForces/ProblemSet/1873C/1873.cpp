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
        int score = 0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
            char a; cin >> a;
            if(a=='X'){

                if(i==0 || j==0 || i==9 || j==9){
                    score+=1;
            }
            else if(i==1 || j==1 || i==8 || j==8){
                score+=2;
            }
            else if(i==2 || j==2 || i==7 || j==7){
                score+=3;
            }
            else if(i==3 || j==3 || i==6 || j==6){
                score+=4;
            }
            else if(i==4 || j==4 || i==5 || j==5){
                score+=5;
            }
            }
        }
    }
    cout << score << endl;
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
