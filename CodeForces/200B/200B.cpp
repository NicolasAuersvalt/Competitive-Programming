#include<iostream>
using namespace std;

// 1° n - oranges
// 2° pi - volume in the i-th drink (percent)

int main(){

  int n=0, i;
  float sum = 0.0, m=0.0;

  cin >> n;
  
  for(i=0; i<n; i++){
    cin >> m;
    sum += m;
  }

  sum = sum/n;
  

  cout << sum;

  return 0;
}