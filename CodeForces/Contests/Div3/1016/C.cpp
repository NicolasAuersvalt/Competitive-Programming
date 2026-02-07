#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
#define debug(x) cout << #x << " = " << x << '\n';
#define vdebug(a) cout << #a << " = "; for(auto x: a) cout << x << ' '; cout << '\n';
#define vvdebug(a) cout << #a <<" ="<<endl; for(auto &row:a){for(auto &x:row) cout<<x<<' '; cout << endl;}

bool ehprimo(int n) {
    if (n <= 1) return false;

    if (n == 2) return true;

    if (n % 2 == 0) return false;

    for (int i = 3; i*i <= n; i += 2) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;

    while (t--) {
        int x, k; cin >> x >> k;

        if (x == 1 && k == 2) { cout << "YES\n"; continue; }

        if (k > 1) {
            cout << "NO\n";
            continue;
        }

        if (ehprimo(x)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
