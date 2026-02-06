#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
#define debug(x) cout << #x << " = " << x << '\n';
#define vdebug(a) cout << #a << " = "; for(auto x: a) cout << x << ' '; cout << '\n';
#define vvdebug(a) cout << #a <<" ="<<endl; for(auto &row:a){for(auto &x:row) cout<<x<<' '; cout << endl;}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<ll> A(n), B(n);
        for (int i = 0; i < n; i++) cin >> A[i];
        for (int i = 0; i < n; i++) cin >> B[i];

        sort(A.begin(), A.end());

        vector<ll> prefix(n+1);
        for (int i = 0; i < n; i++)
            prefix[i+1] = prefix[i] + B[i];

        ll ans = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            ll saldo = n - i;

            auto it = upper_bound(prefix.begin(), prefix.end(), saldo);
            ll inimigos = it - 1 - prefix.begin();

            ans = max(ans, A[i] * inimigos);
        }

        cout << ans << '\n';
    }

    return 0;
}

