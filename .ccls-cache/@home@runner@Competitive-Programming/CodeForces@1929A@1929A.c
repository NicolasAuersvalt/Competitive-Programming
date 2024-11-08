#include<stdio.h>
#include<stdlib.h>

// Struct 
struct Node{
  int data;
  struct Node* next;
};

struct Node* head;

  // int
  // same type pointer 

int main(){  

  head = NULL;

  struct Node* temp = (struct Node*) malloc(sizeof(struct Node));

  struct Node* temp1 = (struct Node*) malloc(sizeof(struct Node));

  struct Node* temp2 = (struct Node*) malloc(sizeof(struct Node));
  
  temp->next=temp1; // testar com endereco de outro

  temp1->next=temp2;

  temp2->next=NULL;
  
  temp->data=2;

  temp1->data=4;

  temp2->data=6;

  head=temp;

  while(temp->next!=NULL){
    temp=temp->next;
    printf("\n%d\n", temp->data);
    
  }
  

  // New pointer

  // malloc"

  // new pointer

  // for(i<n)

    // 
  
  return 0;
}