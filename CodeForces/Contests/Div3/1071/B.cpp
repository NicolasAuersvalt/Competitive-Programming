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

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vi A(n);
        for (int i = 0; i < n; i++) cin >> A[i];

        int k = 0;
        int maxdif = abs(A[0] - A[1]);

        for (int i = 1; i < n - 1; i++) {
            int dif = abs(A[i] - A[i+1]) + abs(A[i] - A[i-1]);
            int dif_hip = abs(A[i+1] - A[i-1]);

            if (dif - dif_hip > maxdif) {
                maxdif = dif - dif_hip;
                k = i;
            }
        }

        int dif = abs(A[n-1] - A[n-2]);
        if (dif > maxdif) {
            maxdif = dif;
            k = n-1;
        }

        ll ans = 0;
        int init = 0;
        if (k == 0) init = 1;

        for (int i = init; i < n - 1; i++) {
            if (i == k - 1) {
                if (k != n-1)
                    ans += abs(A[i] - A[i+2]);

                i = k;
                continue;
            }
            ans += abs(A[i] - A[i+1]);
        }

        cout << ans << '\n';
    }

    return 0;
}
