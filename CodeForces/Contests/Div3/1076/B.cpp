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
        int n; cin >> n;
        vi p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        int l = n;
        for (int i = 0; i < n; i++) {
            if (p[i] != n - i) {
                l = i;
                break;
            }
        }

        if (l == n) {
            for (int i = 0; i < n; i++) cout << p[i] << ' ';
            cout << '\n';
            continue;
        }

        int r = l;
        for (int i = l; i < n; i++) {
            if (p[i] == n - l) {
                r = i;
            }
        }

        for (int i = 0; i < n; i++) {
            if (i == l) {
                for (int j = r; j >= l; j--)
                    cout << p[j] << ' ';
                i = r;
                continue;
            }
            cout << p[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
