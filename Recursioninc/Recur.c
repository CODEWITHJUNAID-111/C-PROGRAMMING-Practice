#include<stdio.h>
int sum(int num){
    // Base case: if the number is 0, return 0
    if(num==0)
    return 0;
    // Recursive case: add the last digit and process the remaining digits
   return num%10+sum(num/10);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // Call the recursive function to calculate the sum of digits
    int result=sum(n);
    printf("Sum of digits: %d", result);
    return 0;
}