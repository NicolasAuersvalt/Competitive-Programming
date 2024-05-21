#include<bits/stdc++.h>

using namespace std;

int main(){

  int n=0, i;
  cin >> n;
  cin.ignore();
  
  for(i=0; i<n; i++){
    int j, shift = 0;
    string str;

    // INPUT
    getline(cin, str);
    cin >> shift;
    
    cin.ignore();
    
    for(j=0; j<str.size(); j++){
      int dif = str[j] - shift;
      if(dif>=65){
        str[j] = dif;
      }
      else{
        str[j] = dif + 26;
      }
    }
    cout << str << endl;
  }
  
  




  
}