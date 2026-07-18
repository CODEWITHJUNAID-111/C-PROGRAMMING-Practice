#include<stdio.h>
#include<math.h>
int main(){
    int original,num,count=0,sum=0,digit;
    printf("Enter a number: ");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        num=num/10;
        count++;
    }
    num=original;
    while(num!=0){
        digit=num%10;
        sum=sum+pow(digit,count);
        num=num/10;
    }
    if(sum==original){
        printf("%d is an Armstrong number.\n",original);
    }
    else{
        printf("%d is not an Armstrong number.\n",original);
    }
    return 0;
}