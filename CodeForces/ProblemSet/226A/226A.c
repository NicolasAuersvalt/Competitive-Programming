#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int main(){

  
  char str[MAX];
  int n=0, i, count=0;
  
  scanf("%d", &n);
  scanf("%s", str);

  for(i=0; str[i]!='\0'; i++){
    if(str[i]==str[i+1]){
      count++;
    }
  }
  printf("%d", count);
  return 0;
}