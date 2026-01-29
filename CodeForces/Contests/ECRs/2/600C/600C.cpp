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

int hasOdd(vector<int>&vi){
    int total=0;
    for(int l=0; l<vi.size(); l++){
        if(vi[l]%2!=0){
            total++;
        }
    }
    return total;
}

void solve() {
    string a;
    cin >> a;

    vector<int> freq(26, 0); // 0 a 25 (26 letras)

    for(char c : a){
        freq[c - 'a']++;
    }

    vector<int> odds;
    for(int i = 0; i < 26; i++) {
        if(freq[i] % 2 != 0) {
            odds.push_back(i);
        }
    }

    int left = 0;
    int right = odds.size() - 1;
    
    while(left < right) {
        freq[odds[left]]++; 
        freq[odds[right]]--; 
        left++;
        right--;
    }

    string half = "";
    char mid = 0;

    for(int i = 0; i < 26; i++) {
        string part(freq[i] / 2, (char)('a' + i));
        half += part;

        if(freq[i] % 2 != 0) {
            mid = (char)('a' + i);
        }
    }

    cout << half;
    if(mid != 0) cout << mid;
    reverse(half.begin(), half.end());
    cout << half << endl;
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
