#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        //cout << "A" << endl;
        int n, sum=0; cin >> n;
        vi vet;
        while(n--){
            //cout << "B" << endl;
            int a; cin >> a;
            sum+=a;
            vet.push_back(a);
        }
        //cout << "C" << endl;
        sort(vet.begin(), vet.end());
        int media = vet[vet.size()/2];
        cout << "Media = " << media << endl;
        cout << "Ultimo Valor = " << vet[vet.size()-1]<< endl;
        cout << "Soma = " << sum << endl;
        int x = 2*media * vet.size() - sum + 1;
        cout << x << endl;
    }
    
    return 0;
}