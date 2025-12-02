#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {

    int n;
    ll res = 0;
    cin >> n; 

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a==20){
            res+=2;
        }
        else if(a >= 15){
            res+=1;
        }
    }
    if(res>=n){
        cout << "O BRUTO FOI DERROTADO" << endl;
    }
    else{
        cout << "O BRUTO ESTA VIVO TPK PARA O GRUPO" << endl;
    }
    return 0;   
}
