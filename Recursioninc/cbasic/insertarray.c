#include<stdio.h>
int main(){
    int value,position, size=5;
    int array[10]={5,15,25,35,45};
    printf("The Value want to insert:");
    scanf("%d",&value);
    printf("The Position where want to insert");
    scanf("%d",&position);
    
    for(int i=5;i>position;i--){
        array[i]=array[i-1];


    }
    
    size++;
    array[position]=value;
    printf("The New updated Array is:\n");
    for(int i=0;i<size;i++){
        printf("%d\n",array[i]);
        

        
    }
    return 0;




}