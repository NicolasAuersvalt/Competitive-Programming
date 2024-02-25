#include<stdio.h>

int main(){

  int vet[2], n=0, i, remains=0;

  scanf("%d", &n);

  for(i=0; i<n; i++){

    scanf("%d %d", &vet[0], &vet[1]);
    if(vet[0]<vet[1]-1)
      remains++;
  }
  printf("%d", remains);
  return 0;
}