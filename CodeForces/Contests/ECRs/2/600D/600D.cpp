#include <bits/stdc++.h>
#include<cmath>
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
    ld x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    
    ld d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (d >= r1 + r2) { 
        cout << fixed << setprecision(20) << (ld)0.0 << endl;
        return;
    }
    if (d <= abs(r1 - r2)) { 
        ld r = min(r1, r2);
        ld pi = acosl(-1.0);
        cout << fixed << setprecision(20) << pi * r * r << endl;
        return;
    }

    ld alpha1 = acosl((r1 * r1 + d * d - r2 * r2) / (2 * r1 * d));
    ld alpha2 = acosl((r2 * r2 + d * d - r1 * r1) / (2 * r2 * d));

    ld area1 = r1 * r1 * alpha1 - r1 * r1 * sin(alpha1) * cos(alpha1);
    ld area2 = r2 * r2 * alpha2 - r2 * r2 * sin(alpha2) * cos(alpha2);

    cout << fixed << setprecision(20) << area1 + area2 << endl;
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
