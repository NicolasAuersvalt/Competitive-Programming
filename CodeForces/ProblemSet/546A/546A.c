#include<stdio.h>

int main(){

  // w banana

  // k banana price

  // n money

  long int k=0, n=0, w=0, i, value=0;

  scanf("%ld %ld %ld", &k, &n, &w);

  for(i=1; i<=w; i++){
    value += i*k;
  }

  if((value-n)<=0){
    printf("0");
    return 0;
  }
  printf("%ld", value - n);

  return 0;
}