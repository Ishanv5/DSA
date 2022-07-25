#include<stdio.h>

void display(int arr[],int n){   // Traversal
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
int sortedInsertion(int arr[],int size,int element,int capacity,int index){
      if(size>=capacity){
        printf("Insertion UnSuccessfull...\n");
        return -1;
      }
      
      for(int i=size-1;i>=index;i--){
         arr[i+1] = arr[i];
      }
      arr[index]=element;
      printf("Insertion Successfull...\n");
      return 1;
}

int main(){
    int arr[100]={7,8,12,27,88};
    int size=5;
    int element=45;
    int capacity=100;
    int index=3;
    display(arr,size);
    sortedInsertion(arr,size,element,capacity,index);
   size+=1;
   display(arr,size);
    return 0;
}