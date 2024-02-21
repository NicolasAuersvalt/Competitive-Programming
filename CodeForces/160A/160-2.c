#include<stdio.h>
#define MAX 100;

int main(){

  int vet[MAX];
  scanf("%s", vet);
  int len = sizeof(vet), aux, min;
  
  // Ordenar

    // Seleciona um 

    // Compara com todos os outros

    // Se nao for, troca de relaçao com o min

    // Quando nao houver nenhum outro, troca de valor com
    // o I inicial
    // I ++
  for(i=0; i<len; i++){
    min = vet[i]; // Nosso Mínimo
    // Preciso armazenar a posição de vet[i]!!!!!

    for(j=i; j<len; j++){
      if(vet[min]>vet[j]){
        min = j;
      }
    }
  }

  return 0;
}