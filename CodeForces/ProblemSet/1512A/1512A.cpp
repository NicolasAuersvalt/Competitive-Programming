#include<bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> vet(n,0);
        vector<int> qtd(101,0);
        for(int i=0; i<n; i++){
            cin >> vet[i];
            qtd[vet[i]]++;
        }
        for(int i=0; i<n; i++){
            if(qtd[vet[i]]==1){
                cout << i+1 << endl;
            }
        }
    }   
    return 0;
}