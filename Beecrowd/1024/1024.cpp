#include<iostream>
#include<vector>
#include<algorithm>
#include<string>


using namespace std;

int main(){

  //  Input

  int n=0, i;
  cin >> n;
  cin.ignore();

  for(i=0;i<n;i++){

    int j, len=0;
    string str;
    getline(cin, str);

    //cout << str << endl;
    len = str.size();
    //cout << len << endl<< endl;


    // Mudança de 3 posições para a direita (+3) para cada letra

    for(j=0; j<len; j++){ // Percorre o vetor
             // Letras (65-90) e (97-122)

      int asc = static_cast<int>(str[j]);
      //cout << "asc: " << asc << " para str " << str[j] << endl;
      if((asc>64 && asc<91) || (asc > 96 && asc < 123)){
        str[j]+=3;
      }

    }
    //cout << "Etapa 1: "<< str << endl;


    // Inverter o vetor
    for(j=0; j<(len/2); j++){
      swap(str[j], str[len-j-1]);
    }

    //cout << "Etapa 2: "<< str << endl;

    // Da metade para direita deve andar uma posição para a esquerda (-1)

    for(j=((len/2)); j<len; j++){
      str[j]-=1;
    }
    cout << str << endl;
    //cout << str << endl;
  }
}
