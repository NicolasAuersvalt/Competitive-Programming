#include<bits/stdc++.h>

using namespace std;

int main(){

  // Input

  int qtd=0, i, j;
  cin >> qtd;
  for(i=0; i<qtd; i++){
    int sum=0;
    string str;
    cin >> str;
    for(j=0; j<str.length();j++){

      if(str[j]=='1'){
        sum+=2;
      }
      else if(str[j]=='7') // 3 leds
        sum+=3;
      else if(str[j]=='4') // 4 leds
        sum+=4;
      else if(str[j]=='2' || str[j]=='3' || str[j]=='5') //5 leds
        sum+=5;
      else if(str[j]=='9' || str[j] == '0' ||str[j]=='6')
        sum+=6;
      else if(str[j]=='8')
        sum+=7;

    }
    cout << sum << " leds" << endl;
  }

  //Armazena cada valor em  uma posição de um vetor.


  return 0;
}
