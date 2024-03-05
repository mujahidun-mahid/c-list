#include<stdio.h>
int main(){
    int num , i  , sum ;

    printf("Enter a positive integer : ");
    scanf("%d",&num);

    for (i = 1; i <= num ; i++)
    {
        sum = sum+i;
    }
    printf("sum = %d",sum);
    
    return 0;
}
