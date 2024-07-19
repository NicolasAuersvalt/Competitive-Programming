#include<bits/stdc++.h>

using namespace std;

int main() {
  int qtd, i;
  cin >> qtd;
  queue<int> fila;

  for (i = 0; i < qtd; i++) {
    int x;
    cin >> x;
    cin.ignore();
    fila.push(x);
  }

  int sai;
  cin >> sai;
  vector<bool> sairam(50000);

  for (i = 0; i < sai; i++) {
    int x;
    cin >> x;
    cin.ignore();
    sairam[x] = true;
  }

  bool fir = true;

  while(!fila.empty()){
      if(!sairam[fila.front()]){
        if(fir){
          cout << fila.front();
          fir = false;
          fila.pop();
        }
        else{
          cout << " " << fila.front(); 
          fila.pop();
        }
      }
        
      else{
        
        fila.pop();
        
      }
  }
  cout << endl;

  return 0;
}