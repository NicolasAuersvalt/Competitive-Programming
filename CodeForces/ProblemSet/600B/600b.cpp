#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin>> n >> m;
    vll vA(n,0), vB(m,0);

    for(int i=0; i<n; i++){
        cin >> vA[i];
    }
    for(int i=0; i<m; i++){
        cin >> vB[i];
    }
    
    sort(vA.begin(), vA.end());

    for(int i=0; i<vB.size(); i++){
        cout << lower_bound(vA.begin(), vA.end(), vB[i]+1) - vA.begin() << " ";
    }

    return 0;
}