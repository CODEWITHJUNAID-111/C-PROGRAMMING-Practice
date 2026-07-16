#include<stdio.h>
int main(){
    int array[5]={1,2,3,4,5};
    int size=5;
    printf("REversed array is:\n");
    for(int i=0;i<size;i++){
        printf("%d\n",array[size-1-i]);
    }



}