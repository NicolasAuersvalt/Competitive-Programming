#include <stdio.h>

int main(){

  int size=0, i, sum=0, k, j;

  scanf("%d", &size);

  int vet[size];

  for(i=0;i<size; i++){
    scanf("%d", &vet[i]);
    sum += vet[i];
  }
  
  // sorting
  for(i=0; i<size; i++){
    
	  int big = 0;
    
	  for(j=0; j<(size-i); j++){
      
	       if(vet[j]>vet[big]){
           
           big = j;
           
         }
	  }

	  int apoio = vet[j-1];
    
    
	  vet[j-1] = vet[big];
    
	  vet[big] = apoio;
    
  }
  
  j=0;

  // limite
  int count=0;
  for(i=size-1; (i>=0)&&(j<=(sum-j)); i--){
	  j+=vet[i];
    count++;
  }
  printf("%d", count);
  
 
}
