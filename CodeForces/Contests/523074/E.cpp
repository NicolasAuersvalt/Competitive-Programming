#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){
  cin.tie(0); 
  ios_base::sync_with_stdio(0);

  long long int n;

  cin >> n;

  if(n%2!=0){
    cout << (n/2) * (n/2+1) << endl;
  }
    
  else{
    cout << (n/2)* (n/2) << endl;
  }
  
}