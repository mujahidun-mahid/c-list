#include <stdio.h>
int main()
{
    int number;
    printf("Enter an integer : ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Your entered %d is a negative number\n", number);
    }
    else
    {
        printf("You entered positive number");
    }

    return 0;
}
