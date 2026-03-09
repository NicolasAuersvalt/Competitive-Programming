#include<bits/stdc++.h>

using namespace std;

int qtdCasas(int n){
    int val=0;
    while(n){
        n=n/10;
        val++;
    }
    return val;
}
int criarVal(int n, int qtd){
    int val = n/(pow(10, qtd-1));
    int res=val;
    //cout << "Val = " << val << " Res = " << res << endl;
    for(int i=1; i<qtd; i++){
        res*=10;
        res += val;
        //cout << "Res = " << res << endl;
    }
    return res;
}

int main(){

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        int qtd = qtdCasas(n);        
        int comparador = criarVal(n, qtd);
        int res1 = (9*(qtd-1));
        int res3 = (pow(10,qtd-1));
        int res2 = (n / res3);
        if(n<comparador){
            cout<< (res2-1)+res1 <<endl;
        }
        else{
            cout<< (res2)+res1 <<endl;
        }        
    }
    return 0;
}