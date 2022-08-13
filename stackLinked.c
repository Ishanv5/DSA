#include<stdio.h>
#include<stdlib.h>
struct  Node{
  int data;
  struct Node * next;
};
int isEmpty(struct Node * top){
  if(top==NULL){
    return 1;
  }
  else{
    return 0;
  }
}
int isFull(struct Node * top){
   struct Node * p=(struct Node *)malloc(sizeof(struct Node  ));
   if(p==NULL){
    return 1;
   }
   else{
    return 0;
   }
}
void linkedListTraversal(struct Node * ptr){
     while(ptr!=NULL){
     printf("Element : %d\n ",ptr->data);
     ptr=ptr->next;
     }
}
struct Node *  push(struct Node * top,int x){
    
    if(! isFull(top)){
       printf("Stack overflow..\n");
    }
    else{
      struct Node * n=(struct Node *) malloc(sizeof(struct Node ));
      n->data = x;
      n->next = top;
      top=n;
      return top;
    }
}
int main(){
    struct Node * top=NULL;
    top=push(top,43);
    top=push(top,3);
    top=push(top,4);
    linkedListTraversal(top);
    return 0;
}