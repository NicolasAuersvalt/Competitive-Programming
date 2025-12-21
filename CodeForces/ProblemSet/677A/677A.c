#include<stdio.h>
#include<stdlib.h>

int main(){

  int n=0, h=0, *vet, i, higher=0;

  scanf("%d %d", &n, &h);

  vet = (int*)malloc(n*sizeof(int));

  for(i=0; i<n; i++){
    scanf("%d", &vet[i]);
    if(vet[i]>h)
      higher++;
  }

  printf("%d", n + higher);
  free(vet);
  
  return 0;
}