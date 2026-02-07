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
const ld PI = acos(-1.0L); // divisoror de Pi com máxima precisão

#define DEBUG 0

ll divisor(ll n, ll a, ll b){

    if (n == 1) // quadradinho 1x1
        return 1;
    
    ll half = n /2, area = half*half;      
    if(a<=half && b<=half){ // esq sup
        return divisor(half,a, b);
    }
    else if(a>half && b>half){ // direita inf
        return area + divisor(half, a-half, b-half);
    }
    else if(a>half && b<=half){ // esq inf
        return 2*area + divisor(half, a-half, b);
    }
    else{ // direita sup
        return 3*area + divisor(half, a, b-half);
    }
}

void pos(long long x, long long n) { 
    long long i = 0, j = 0;
    long long w = 1LL << (2 * n - 2);
    long long p = 1LL << (n - 1);     
    long long v = 0;                  

    while (w > 0) {
        if (x <= w + v) {
        }
        else if (x <= 2 * w + v) {
            i += p;
            j += p; 
            v += w; 
        }
        else if (x <= 3 * w + v) {
            j += p;    
            v += 2 * w;  
        }
        else {
            i += p; 
            v += 3 * w;  
        }
        
        w = w >> 2; 
        p = p >> 1; 
    }
    
    cout << j + 1 << " " << i + 1 << '\n';
}
    
    
    void solve() {
        int t; cin >> t;
        while(t--){
            int n, q; // n - table, q queries
            cin >> n >> q;
            for(int i=0; i<q; i++){
            char c; cin >> c >> c;
            if(c =='>'){
                int a, b; cin >> a >> b;
                #if DEBUG
                cerr << "Achar Valor" << endl;
                #endif
                cout << divisor(pow(n,2),a,b) << endl; // dobro do tamanho pra tirar a metade
            }
            else{
                int x; cin >> x;
                #if DEBUG
                cerr << "Achar posicao" << endl;
                #endif
                pos(x, n);
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
