#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll casoTeste;
    ll n;
    cin >> casoTeste;
    cin >> n;

    vector<pair<ll, ll>> coordenadas;

    ll xMax, xMin, yMax, yMin;
    bool primeiro = true;

    for (ll i = 0; i < n; i++) {
        ll a, b;
        char l;
        cin >> a >> b >> l;

        if (primeiro) {
            primeiro = false;
            xMax = a;
            xMin = a;
            yMax = b;
            yMin = b;
        }

        xMax = max(xMax, a);
        xMin = min(xMin, a);
        yMax = max(yMax, b);
        yMin = min(yMin, b);

        if (l == 'Y') {
            coordenadas.push_back({a, b});
        }
    }

    

    return 0;
}
