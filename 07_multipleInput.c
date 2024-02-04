#include<stdio.h>
int main()
{
    int num;
    char name;

//Here we have to use multiple format specifier To get multiple types of input and output

    printf("Enter Character and Number = ");
    scanf(" %c %d",&name, &num);

    printf("Character: %c\nNumber: %d",name, num);
    return 0;
}