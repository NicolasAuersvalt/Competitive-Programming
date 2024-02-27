#include<iostream>
using namespace std;

int main(){
  int n=0, m=0, i, flag=1, j;

  cin >> n; // Row
  cin >> m; // Column

  for(i=0; i<n; i++){

    if(i%2==0){ // #####

      for(j=0; j<m; j++){
        cout << "#";
      }
      cout << "\n";
    }

    else if(flag==1){ // End
      for(j=0; j<m-1; j++){
        cout << ".";
      }
      cout << "#";
      cout << "\n";
      flag=0;
    }

    else if(flag==0){ // Start
      cout << "#";
      for(j=0; j<m-1; j++){
        cout << ".";
      }
      cout << "\n";
      flag=1;
    }
  }

  return 0;
}