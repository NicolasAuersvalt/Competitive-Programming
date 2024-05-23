#include<bits/stdc++.h>

using namespace std;

int main(){

  string str;

  while(getline(cin, str)){
  int i, inc=0;  
  stack<char> st;
  
  for(i=0; i<str.size(); i++){
    if(str[i]=='('){
      st.push(str[i]);
    }
    else if(str[i]==')'){
      if(st.empty()){
        inc = 1;
      }
      else{
        st.pop();
      }
    }
    
  }
  if(st.empty() && inc==0)
    cout << "correct" << endl;
  else
    cout << "incorrect" << endl;
  }


  return 0;
}