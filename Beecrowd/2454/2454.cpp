#include<bits/stdc++.h>

using namespace std;
int main(){

  int pri, sec;
  cin >> pri >> sec;

  if(pri==1){ // bola p Esquerda
    if(sec==1){ // esq
      cout << "A" << endl;
    }
    else{
      cout << "B" << endl; // dir
    }
  }
  else{ // Bola p direita
    cout << "C" << endl;
  }
  
  return 0;
}