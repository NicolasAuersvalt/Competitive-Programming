#include<stdio.h>

int main(){

  long int n=0, k=0, i;

  scanf("%ld %ld", &n, &k);

  for(i=0; i<k; i++){
    //printf("%ld\n", n%10);
    
    // ends 0 -> (n/10)-1
    if(n%10==0){
      
      n = (n / 10);
    }

      // ends >0 -> -1
    else{
      n--;
    }
  }
  printf("%ld", n);
  return 0;
}