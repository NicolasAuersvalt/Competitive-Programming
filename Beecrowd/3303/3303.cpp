#include<bits/stdc++.h>

using namespace std;

int main(){

  string vet;

  getline(cin, vet);

  
  if(vet.size()>=10){
    cout << "palavrao" << endl;
  }
  else{
    cout << "palavrinha" << endl;
  }


  return 0;
}