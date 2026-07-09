#include<stdio.h>

int reverse(int num){
    int reversed = 0;
    while(num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num =num/10;
    }
    return reversed;
}
int main() {
    int num;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);
    int result = reverse(num);
    printf("The reverse of %d is %d\n", num, result);
    return 0;
}
