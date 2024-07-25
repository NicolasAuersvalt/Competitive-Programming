#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){

  int tam, qtd, i, j, dia=1, fim, inicio;
  cin >> tam >> qtd;

  tam++;
  
  vector<bool> ref(tam, false);
  bool ini = true;

  for(i=0; i<qtd; i++){
    cin >> fim;
    if(ini){
      inicio=fim;
      ini = false;
    }
    
    ref[fim] = true;
  }  

  int distMax=0;
  for(i=1;i<=tam;i++){
    if(ref[i]){
      for(j=i+1; (ref[j]==false) && (j<=tam); j++);
      if((j-i)>distMax){
        distMax = j-i;
      }
    }
  }
  distMax = ceil(distMax/2);

  if(((tam-fim-1)>= distMax) && (tam-fim-1)>inicio-1){
      cout << tam-fim-1 << endl;
    }
  else if((inicio-1 >= distMax) && (inicio-1 > (tam-fim-1))){
      cout << inicio-1 << endl;
    }
  else{
    cout << distMax << endl;
  }
  
  

  return 0;
}