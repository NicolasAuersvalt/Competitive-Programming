#include<iostream>

using namespace std;

int main(){

  int a, b, c;

  cin >>a >> b >> c;

  int maior1;

  maior1 = (a+b+abs(a-b))/2;
  
  int maior2;
  
  maior2 = (maior1+c+abs(maior1-c))/2;

  cout << maior2 << " eh o maior" << endl;

  return 0;
}