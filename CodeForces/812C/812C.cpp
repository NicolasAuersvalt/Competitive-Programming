#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

ll calculateCost(vi &items, int k) {
    vll costs;
    for(long long i = 0; i < items.size(); i++){
        ll currentCost = items[i] + (i + 1) * k;
        costs.push_back(currentCost);
    }
    sort(costs.begin(), costs.end());
    ll totalCost = 0;
    for(int i = 0; i < k; i++){
        totalCost += costs[i];
    }
    return totalCost;
}

pair<int, ll> binarySearch(vi &items, ll s){ 
    int l = 0, r = items.size();
    int bestK = 0;
    ll bestCost = 0;
    
    while(l <= r){
        int m = l + (r - l) / 2; 
        ll cost = calculateCost(items, m); 
        if(cost <= s){ 
            bestK = m;       
            bestCost = cost; 
            l = m + 1;  
        }
        else { 
            r = m - 1;       
        }
    }
    return make_pair(bestK, bestCost);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    ll s; 
    cin >> n >> s;
    vi items;
    
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        items.push_back(a);
    }

    pair<int, ll> res = binarySearch(items, s);
    cout << res.first << " " << res.second << endl;

    return 0;
}