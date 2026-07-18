#include<stdio.h>

int main() {
    int num, smallest;
    printf("Enter a number: ");
    scanf("%d", &num);
    smallest = num % 10;
    num = num / 10;

    while (num != 0) {
        if (num % 10 < smallest) {
            smallest = num % 10;
        }
        num = num / 10;
    }

    printf("The smallest digit is: %d\n", smallest);
    return 0;
}