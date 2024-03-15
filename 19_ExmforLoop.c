#include<stdio.h>
int main()
{
    int num , i, sum = 0;

    printf("Enter a positive integer : ");
    scanf(" %d", &num);

    //for loop terminate when num is less then count
    for ( i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    
    printf("Sum = %d",sum);
    return 0;
}
