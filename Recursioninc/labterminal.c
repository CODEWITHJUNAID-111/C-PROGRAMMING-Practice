#include <stdio.h>

// Function to check whether a number is perfect
int isPerfect(int num)
{
    int i, sum = 0;

    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int start, end, i;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Perfect numbers between %d and %d are:\n", start, end);

    for(i = start; i <= end; i++)
    {
        if(isPerfect(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}

