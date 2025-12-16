#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k; cin >> n >> k;
    vector<ll> vet(n,0);
    vector<ll> diffs(n,0);
    ll sum=0;
    for(int i=0; i < n; i++){
        cin >> vet[i];
        if(i>0){
            diffs[i] = vet[i] - vet[i-1];
            sum += diffs[i];
            //cout << "Soma= " << sum << endl;
        }
    }
    sort(diffs.begin(), diffs.end());
    for(int i=0; i<k-1; i++){
        sum-=diffs[diffs.size()-1-i];
        //cout << "Soma Reduzida = " << sum << endl;
    }
    cout << sum << endl;
    return 0;
}