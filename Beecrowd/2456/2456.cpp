#include<bits/stdc++.h>

using namespace std;

int main(){

  vector<int> vet;
  int i;
  while(cin >> i){
    vet.push_back(i);
    if(cin.peek()=='\n'){
      break;
    }
  }

  vector<int> vet2(vet.begin(), vet.end());

  sort(vet2.begin(), vet2.end());
  
  for(i=0; i<vet.size(); i++){
    if(vet[i] != vet2[i])){
      i=vet.size();
    }
  }
  
  return 0;
}