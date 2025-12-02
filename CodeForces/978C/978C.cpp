#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<ll> vl;

ll binarySearch(const vl& vet, ll val) {
    ll l = 0, r = vet.size() - 1;
    ll ans = -1; 

    while (l <= r) {
        ll m = l + (r - l) / 2; 
        if (vet[m] >= val) {
            ans = m;      
            r = m - 1;    
        } else {
            l = m + 1;
        }
    }
    return ans; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    if (!(cin >> n >> m)) return 0; 

    vl rooms, sum; ll acumulado = 0;

    for(ll i = 0; i < n; i++){
        ll a; cin >> a;
        acumulado += a;
        sum.push_back(acumulado);
        }

    for(ll i = 0; i < m; i++){
        ll carta; cin >> carta;
        ll index = binarySearch(sum, carta);
        ll num_predio = index + 1, num_quarto;

        if(index == 0) {
            num_quarto = carta;
        } else {
            num_quarto = carta - sum[index - 1];
        }

        cout << num_predio << " " << num_quarto << "\n";
    }

    return 0;
}