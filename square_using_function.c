#include<stdio.h>

int square(int n) {
    return n*n;
}

int main() {
    int num;
    printf("Enter a number to square: ");
    scanf("%d", &num);
    int result = square(num);
    printf("The square of %d is %d\n", num, result);
    return 0;
}