#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

void solve() {
    int n; 
    cin >> n;
    
    vi vet(n);
    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }

    vector<bool> seen(n + 1, false);
    for(int l = 0; l < n; l++) {
        int current_sum = vet[l];
        for(int r = l + 1; r < n; r++) {
            current_sum += vet[r];
            
            if(current_sum > n) break;
            
            seen[current_sum] = true;
        }
    }

    int ans = 0;
    for(int x : vet) {
        if(seen[x]) {
            ans++;
        }
    }
    
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}