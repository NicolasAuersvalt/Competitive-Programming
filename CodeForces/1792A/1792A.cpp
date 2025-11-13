#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; ++i) cin >> h[i];

        int qtdUm = 0;
        for (int x : h)
            if (x == 1) qtdUm++;

        int result = (qtdUm + 1) / 2 + (n - qtdUm);
        cout << result << "\n";
    }
}
