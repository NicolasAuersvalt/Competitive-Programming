#include <bits/stdc++.h>

using namespace std;

int main() {
 
     int n, i;
     cin >> n;
     vector<int> vet(n,0);
     for(i=0; i<n;i++){
       cin>>vet[i];
     }
     int an =vet[1];
     int count;
     for(i=2; i<(n);i++){
      if(vet[i]!=an);
        count++;
     an=vet[i];
}
    cout<<count;
    return 0;
}