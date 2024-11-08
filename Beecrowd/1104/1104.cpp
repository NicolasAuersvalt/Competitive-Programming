#include<bits/stdc++.h>
using namespace std;

int main(){

  int i, j;
  
  while(true){
    cin >> i >> j;
    if(i == 0 && j == 0){
      break;
    }
    cin.ignore();
    
    set<int> set1;
    set<int> set2;

    int m, n;
    for(m=0; m<i; m++){
      cin >> n;
      set1.insert(n);
    }
    for(m=0; m<j; m++){
      cin >> n;
      set2.insert(n);
    }

    int i, rep=0;
    if(set1.size() < set2.size()){
      set<int> set3 = set1;
      set1 = set2;
      set2 = set3;
    }

    for(auto l=set2.begin();l!=set2.end(); l++){
      if(set1.find(*l) != set1.end()){
        rep++;
      }
    }
    cout << set2.size() - rep << endl;
  }
  
}