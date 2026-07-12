#include <stdio.h>
int main() {
    int num;
    printf("Enter a number to square: ");
    scanf("%d", &num);
    int result = num * num;
    printf("The square of %d is %d\n", num, result);
    return 0;
}
