#include<stdio.h>
int main(){
    char a;

//Her happy to use %c to get input in character
    printf("enter character : ");
    scanf(" %c",&a);

//He had to use %d because of decimal value
    printf("Ascii value is : %d",a,a);

    return 0;
}