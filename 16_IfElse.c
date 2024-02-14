#include <stdio.h>

int main()
{
    int number;

    printf("Enter an Integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("You entered a negative number: %d\n", number);
    }
    else
    {
        printf("You entered a positive number.");
    }

    return 0;
}
