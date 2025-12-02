#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int n, m, l;
    cin >> n >> m >> l;
    vector<int> custo(m), nums(n);
    for(int i=0; i<m; i++){
        cin >> custo[i];
    }
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    unordered_map<int, long long> counter;
    ll res = 0;
    ll best = LLONG_MAX;
    int right = 0;
    for(right = 0; right < l; right++){
        int x = nums[right];
        counter[x]++;
        if(counter[x] == 1){
            res += custo[x-1];
        } else {
            res += (custo[x-1] * (1LL << (counter[x] - 1)));
        }
    }
    best = res;
    right = l-1;
    for(int left = 0; right < n; left++){
        int x = nums[left];
        res -= (custo[x-1] * (1LL << (counter[x] - 1)));
        counter[x]--;
        right++;
        if(right==n) break;
        int y = nums[right];
        counter[y]++;
        if(counter[y] == 1){
            res += custo[y-1];
        } 
        else {
            res += (custo[y-1] * (1LL << (counter[y] - 1)));
        }
        if(res < best) {
            best = res;
        }
    }
    cout << best << "\n";
    return 0;
}
