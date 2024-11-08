#include<bits/stdc++.h>

using namespace std;

int main(){

  int qtd;
  cin >> qtd;
  for(int i =0; i<qtd; i++){
    bool encaixa = true;
    string maior, menor;
    cin >> maior >> menor;

    if(maior.size()>=menor.size()){
    
      for(int l=maior.size()-menor.size(), k=0; (l<maior.size() && encaixa); l++, k++){
        if(maior[l]!=menor[k]){
          encaixa = false;
        }
      }
        
      if(encaixa)
        cout << "encaixa" << endl;
      else
        cout << "nao encaixa" << endl;
    }
    else
      cout << "nao encaixa" << endl;
  }
  
 
  return 0;
}