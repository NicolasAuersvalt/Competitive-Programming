#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<int, int> mp;
    ll count = 0;
    vector<ll> powers;
    for (int i = 0; i <= 30; i++) { 
        powers.push_back(1LL << i);
    }
    for (int i = 0; i < n; i++) {
        for (ll p : powers) {
            ll target = p - a[i];
            if (mp.count(target)) {
                count += mp[target];
            }
        }
        mp[a[i]]++;
    }

    cout << count << endl;

    return 0;
}