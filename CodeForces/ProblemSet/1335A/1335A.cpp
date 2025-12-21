#include<iostream>
using namespace std;

int main(){
  int n=0, i;
  int m=0;

  cin >> n;

  for(i=0; i<n; i++){
    cin >> m;
    
    // even
    if(m%2==0){
      cout << m/2 -1;
    }
    else{
      cout << m/2;
    }
    cout << "\n";
  
  }
  
  return 0;
}