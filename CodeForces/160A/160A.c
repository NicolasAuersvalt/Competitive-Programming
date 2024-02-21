#include<stdio.h>
#define MAX 100

void quicksort(char vet[], int ini, int fim);

int partition(char vet[], int ini, int fim);

int main(){

  // Ordenar

    // Dado o Vetor

  char vet[100];

  scanf("%s", vet);

  quicksort(vet, 0, MAX);

  printf("%s",vet);

  

    // Selecionar um pivot

      // Iniciar barra amarela e roxa, tendo os valores máximo e mínimo do vetor

      // Comparar cada i com algum outro do vetor, se for maior EM RELAÇÃO AO PIVOT

      // Se for maior, ficará à direita (do i, inicialmente)

      // Se for menor, ficará no lugar do i, e o i passará a ser o i+1

      // ao fim, retorna o valor do i (pois teremos dividido assim)

      // menores |i| maiores

      // o i separa, então devolvemos o valor i-1 (pois está sendo somado no fim toda vez) para a função

   // Depois seleciona o i como pivot e passa para essa mesma função, só que em vez de máximo e mínimo, usamos os limites de i

   // I inicial para o vetor à direita / I final para o vetor à esquerda

  // Selecionar o valor máximo

  // Comparar com a soma dos outros (-i)

  // Se não der, pegar valores para os quais somados seja maior (Não será muitas moedas)

  // Se não, pegue todas

  return 0;
  
}

void quicksort(char vet[], int ini, int fim){
  printf("Quicksort");
  
  // se for vazio

  // se incio < fim
  if(ini<fim){
    int p = partition(vet, ini, fim);
    
    quicksort(vet, p, fim); // Direita
    quicksort(vet, ini, p); // Esquerda (usando o pivô)
  }
  else{
    fim = sizeof(vet)-1;
  }

}

int partition(char vet[], int ini, int fim){

  printf("Partition");

  int max=ini, min=ini, aux;

  for(max=ini; max<fim; max++){
    if(vet[max]<vet[fim]){ // Menor
      aux = vet[min];
      vet[min]=vet[max];
      vet[max] = aux;
      min++;
    }
    aux = vet[max];
    vet[max] = vet[min];
    vet[min] = aux;

    return (min-1);
  }

  
  

}