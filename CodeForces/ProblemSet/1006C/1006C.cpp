#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int main(){

    ll n; cin >> n;

    vll vet(n,0);
    for(int i=0; i<n; i++){
        cin >> vet[i];
    }
    ll l=0, r=vet.size()-1;
    ll sumEsq=0, sumDir=0, maxSum=0;

    sumEsq += vet[l]; 
    sumDir += vet[r];

    while(r-l>0){
        while(sumDir-sumEsq>0 && r-l>0) 
        {
            l++;
            sumEsq += vet[l];
        }
        while(sumDir-sumEsq<0 && r-l>0)
        {
            r--;
            sumDir += vet[r];
        }
        if(sumDir-sumEsq==0) {
            r--; l++;
            maxSum += sumDir;
            sumEsq = vet[l]; 
            sumDir = vet[r];
        }
    }
    cout << maxSum << endl;


    return 0;
}