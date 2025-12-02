#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long sum=0;
        vi vet;
        for(int i=0; i<n;i++){
            int a; cin >> a;
            sum+=a;
            vet.push_back(a);
        }
        if(n<=2){
            cout << -1 << endl;
        }
        else{
            sort(vet.begin(), vet.end());
            int media = vet[vet.size()/2];
            long long x = 2*media * vet.size() - sum + 1;
            if(x>=0)
                cout << x << endl;
            else
                cout << 0 << endl;
        }
    }
    
    return 0;
}