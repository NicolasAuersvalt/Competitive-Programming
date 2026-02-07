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
        int n, s, x; cin >> n >> s >> x;
        ll soma = 0;
        for (int i = 0; i < n; i++) { int a; cin >> a; soma += a; }

        int ok = 0;
        while (soma <= s) {
            if (soma == s) {
                cout << "YES\n";
                ok = 1;
                break;
            }

            soma += x;
        }

        if (!ok) cout << "NO\n";
    }

    return 0;
}
