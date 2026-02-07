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
        string s; cin >> s;
        int n = s.size();

        int idx = n - 1;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != '0') {
                idx = i;
                break;
            }
        }

        ll ans = 0;
        for (int i = idx + 1; i < n; i++) {
            if (s[i] == '0')
                ans++;
        }

        for (int i = idx - 1; i >= 0; i--) {
            if (s[i] != '0')
                ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}
