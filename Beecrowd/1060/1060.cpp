#include<stdio.h>


int main(){

  float value=0.0;
  int total=0, i; 
  for(i=0; i<6; i++){
    scanf("%f", &value);
    if(value>=0){total++;}
  }
  printf("%d valores positivos", total);



   return 0;
}
