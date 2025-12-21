#include<iostream>


using namespace std;

int main(){

  int n=0, bill=0;
  cin >> n;

  if(n%100>=0){
    bill += n/100;
    n = n%100;
  }
  if(n%20>=0){
    bill += n/20;
    n = n%20;
  }
  if(n%10>=0){
    bill += n/10;
    n = n%10;
  }
  if(n%5>=0){
    bill += n/5;
    n = n%5;
  }
  if(n%1>=0){
    bill += n/1;
    n = n%1;
  }
  
  cout << bill;

  return 0;
}