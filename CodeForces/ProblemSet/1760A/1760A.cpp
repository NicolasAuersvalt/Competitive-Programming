#include<bits/stdc++.h>

using namespace std;
int main(){

    int t; cin >> t;
    while(t--){
        vector<int> vet(3,0);
        cin >> vet[0] >>  vet[1] >>  vet[2];
        sort(vet.begin(), vet.end());
        cout << vet[1] << endl;
    }

    return 0;
}