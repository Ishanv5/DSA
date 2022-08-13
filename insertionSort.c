#include<stdio.h>
#include<stdlib.h>
void printArray(int * arr,int n){
   for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
   }
   printf("\n");
}
void insertionSort(int *arr,int n){
    
}
int main(){
   int arr[]={34,23,12,4,5,20};
   int n=6;
   printArray(arr,n);
   insertionSort(arr,n);
  return 0;
}