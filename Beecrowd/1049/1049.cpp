#include<iostream>

using namespace std;

int main(){

  string pri, sec, ter;

  cin >> pri >> sec >> ter;

  if(pri == "vertebrado"){
    if(sec == "ave"){
      if(ter == "carnivoro")
        cout << "aguia" << endl;
      else
        cout << "pomba" << endl;
    }
    else{
      if(ter == "onivoro")
        cout << "homem" << endl;
      else
        cout << "vaca" << endl;
    }
  }
  else{
    if(sec == "inseto"){
      if(ter == "hematofago")
        cout << "pulga" << endl;
      else
        cout << "lagarta" << endl;
    }
    else{
      if(ter == "hematofago")
        cout << "sanguessuga" << endl;
      else
        cout << "minhoca" << endl;
    }
  }

  return 0;
}