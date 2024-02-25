#include<iostream>
using namespace std;

#define MAX 100

int main(){

  int i, n=0;
  cin >> n;
  
  int vet[MAX], copy[MAX];

  for(i=1; i<=n; i++){
    cin>>vet[i];
    copy[vet[i]]=i;
  }

  for(i =1; i<=n; i++){
    cout << copy[i] << " ";
  }  

  return 0;
}