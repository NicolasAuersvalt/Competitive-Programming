#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m; cin >> n >> m;
    vll pos (n,0), tow(m, 0), dist(n, 0);
    for(ll i=0; i<n; i++){
        cin >> pos[i];
    }
    for(ll i=0; i<m; i++){
        cin >> tow[i];
    }
    sort(pos.begin(), pos.end());
    sort(tow.begin(), tow.end());
    ll max = 0;
    for(ll i=0; i<n; i++){
        auto lB = lower_bound(tow.begin(), tow.end(), pos[i]);
        auto uB = upper_bound(tow.begin(), tow.end(), pos[i]);
        int val = 1;
        if(lB==tow.begin() || *lB == pos[i]) val=0;
        if(uB==tow.end()) uB = tow.end()-1;
        dist[i] = min(abs(*(lB-val)-pos[i]), abs(*uB-pos[i]));
        if(dist[i]>max) max = dist[i];
      
    }

    cout << max << endl;
    return 0;
}