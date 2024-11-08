#include<bits/stdc++.h>

using namespace std;

int main(){

  string s;

  getline(cin, s);

  int i, j;
  for(i=0; i<s.size(); i+=2){
    if(s[i] == ' '){
      cout << s[i];
      i++;
    }
    cout << s[i+1];
  }
  
  return 0;
}