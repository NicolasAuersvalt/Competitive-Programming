#include<bits/stdc++.h>


using namespace std;

int main(){

  vector<int> vet(4);

  cin >> vet[0] >> vet[1] >> vet[2] >> vet[3];

  sort(vet.begin(), vet.end());


  for(int i=3; i>1; i--){
    for(int j=0; j<3; j++){
      for(int k =0; k<3; k++){
        if((i!=j) && (j != k) && (k != i)){
          if(vet[i] < vet[j] + vet[k]){
            cout << "S" << endl;
            return 0;
          }
        }
      }
    }
  }
  
  cout << "N" << endl;
  return 0;
}