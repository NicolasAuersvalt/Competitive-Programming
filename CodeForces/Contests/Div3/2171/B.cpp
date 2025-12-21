#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>> t;
    while(t--){
        int n; cin >> n;
        vi vet(n, 0);
        for(int i=0; i<n; i++){
            cin >> vet[i];
        }
        int diff = vet[n-1] - vet[0];
        for(int i=0; i<n; i++){
            if(diff>0){
                if(vet[0]==-1)
                {
                    vet[0] = vet[n-1];
                }
                }
            else if(diff<0){
                if(vet[n-1]==-1)
                {    
                    vet[n-1]=vet[0];
                }
            }
            
        }
        cout << abs(vet[n-1] - vet[0]) << endl;
        for(int i=0;i<n;i++){
            if(vet[i]==-1) cout << 0 << " ";
            else cout << vet[i] << " ";
        }
        cout << endl;
    }

    return 0;
}