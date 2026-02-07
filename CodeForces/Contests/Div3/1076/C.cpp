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

    while (t--) {
        int n, q; cin >> n >> q;
        vi A(n), B(n);
        for (int i = 0; i < n; i++) cin >> A[i];
        for (int i = 0; i < n; i++) cin >> B[i];

        vi S(n);
        S[n-1] = max(A[n-1], B[n-1]);
        for (int i = n - 2; i >= 0; i--) {
            S[i] = max({ S[i+1], A[i], B[i] });
        }

        vi prefix(n);
        prefix[0] = S[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] + S[i];
        }

        while (q--) {
            int l, r; cin >> l >> r;
            l--; r--;
            if (l == 0) cout << prefix[r] << ' ';
            else cout << prefix[r] - prefix[l-1] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
