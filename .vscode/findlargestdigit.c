#include <stdio.h>

int main() {
    int num, largest = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    largest = num % 10;
    num=num/10;
    
    while (num != 0) {
        if (num % 10 > largest) {
            largest = num % 10;
        }
        num = num / 10;
    }
    
    printf("The largest digit is: %d\n", largest);
    return 0;
}