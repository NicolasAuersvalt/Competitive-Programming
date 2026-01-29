#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    if (!(cin >> n >> m)) return 0;
    vector<long long> counts(m + 1, 0);
    for (int i = 0; i < n; ++i) {
        int genre;
        cin >> genre;
        counts[genre]++;
    }

    long long total_pairs = (n * (n - 1)) / 2;

    long long same_genre_pairs = 0;
    for (int i = 1; i <= m; ++i) {
        if (counts[i] > 1) {
            same_genre_pairs += (counts[i] * (counts[i] - 1)) / 2;
        }
    }

    cout << total_pairs - same_genre_pairs << endl;

    return 0;
}