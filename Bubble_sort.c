#include<stdio.h>
void printArray(int * arr,int n){
   for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
   }
}
void BubbleSort(int * arr,int n){
    int isSorted = 0; 
    for(int i=0;i<n-1;i++){
        isSorted =1;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted=0;
            }
        }
    }
}
int main(){
    //int arr[]={12,4,68,3,44,5};
    int arr[]={3,4,5,12,44,68};
    int n=6;
    printf("Before Sorting :\n ");
    printArray(arr,  n);
    BubbleSort(arr,n);
     printf(" \n After Sorting : \n");
    printArray(arr,  n);
    return 0;
}