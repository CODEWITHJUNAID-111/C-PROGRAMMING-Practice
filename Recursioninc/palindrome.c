#include<stdio.h>
int reverse(int num, int rev){
    // Base case: if the number is 0, return the reversed number
    if(num==0)
        return rev;
        // Recursive case: call the function with the number divided by 10 and the reversed number updated
        return reverse(num/10,rev*10+num%10);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // Initialize a variable to store the reversed number
    int re=0;
    // Call the reverse function to get the reversed number
    int result=reverse(n,0);
    // Check if the original number and the reversed number are the same
    if(result==n){
        printf("The number is a palindrome.\n");
    }else{
        printf("The number is not a palindrome.\n");
    }
    return 0;
}