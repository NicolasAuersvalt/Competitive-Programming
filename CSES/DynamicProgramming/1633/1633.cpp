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
    int a; cin >> a;
    vi dp(a,0);
    dp[0]=1, dp[1]=1, dp[2]=3, dp[3]=4, dp[4]=8, dp[5]=13; dp[6]=
    int sum = 0;
    for(int i=6; i<a; i++){

        else{
            sum = sum - dp[i-7] + dp[i]; 
            dp[i]=sum;
        }
    }
    cout << dp[a-1] << endl;
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
