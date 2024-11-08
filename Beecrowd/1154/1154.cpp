#include<stdio.h>

int main(){

  int value=0, total=0;
  float average=0;
  while(value>=0){
    average +=value;
    scanf("%d", &value);
    total++;
  }
  average /= (total-1);
  printf("%.2f\n", average);

  return 0;
}
