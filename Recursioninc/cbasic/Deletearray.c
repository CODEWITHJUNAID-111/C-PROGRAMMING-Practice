#include<stdio.h>
int main(){
    int size=5,position;
    int arr[10]={5,15,25,35,45};
    printf("Enter the position of the element you want to delete:\n");
    scanf("%d",&position);

    for(int i=position;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
    printf("The New updated Array is:\n");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;

     

}