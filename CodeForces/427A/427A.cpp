#include<iostream>
using namespace std;

int main(){
  int n=0, m=0, i, sum=0, count=0;

  cin >> n;

  for(i=0; i<n; i++){
    cin >> m;
    sum += m;
    if(sum<0){
      count++;
      sum=0;
    }
  }
  cout << count;
  
  return 0;
}