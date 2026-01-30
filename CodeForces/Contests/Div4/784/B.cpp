#include<bits/stdc++.h>

using namespace std;

int main(){ 
    int n; cin >> n;
    while(n--){
        int a; cin >> a;
        int val = -1;

        vector<int> vet(a+5,0);

        for(int i=0; i<a; i++){
            int m; cin >> m;
            vet[m]++;
            if(vet[m]>=3){
                val = m;
            }
        }
        cout << val << endl;

    }
    return 0;
}