#include<stdio.h>
int main(){
    int num;
    float num2;
    double num3;
    char name;

    printf("Enter Integer : ");
    scanf(" %d", &num);
    printf("Enter float : ");
    scanf(" %f", &num);
    printf("Enter double : ");
    scanf(" %lf", &num3);
    printf("Enter character : ");
    scanf(" %c", &name);
    
    printf("Integer : %d\n",num);
    printf("Float : %f\n",num2);
    printf("Double : %lf\n",num3);
    printf("Character : %c\n",name);
    
return 0;
}