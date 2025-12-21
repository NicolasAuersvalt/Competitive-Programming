#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector<ll> vet(n);

    for (ll i = 0; i < n; i++) {
        cin >> vet[i];
    }

    ll m;
    cin >> m;
    vector<ll> teste(m);

    for (ll i = 0; i < m; i++) {
        cin >> teste[i];
    }

    long long dir_total = 0, inv_total = 0; 

    for (ll i = 0; i < m; i++) {
        bool finalizado = false;

        for (ll j = 0; j < n && !finalizado; j++) 
        {

            if (vet[j] == teste[i]) 
            { 
                dir_total += (j + 1); 
                inv_total += (n - j); 
                finalizado = true; 
            }
            else if (vet[n - 1 - j] == teste[i]) 
            {
                dir_total += (n - j); 
                inv_total += (j + 1); 
                finalizado = true;
            }
        }
    }

    cout << dir_total << " " << inv_total << endl;

    return 0;
}
