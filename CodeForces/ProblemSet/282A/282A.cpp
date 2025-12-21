#include <iostream>
#include <string>

int main(){

  // Gets n value

  int n, i, value=0;
  std::string stat;

  std::cin >> n;

  // for 
  for(i=0; i<n; i++){
    std::cin >> stat;
  
  // declare 2 conditionals
    // if (++x) or (x++)

  if(stat=="++X"||stat=="X++"){
    ++value;
  }
  else{
    --value;
    }
    
  }
  std::cout << value;
  return 0;
}