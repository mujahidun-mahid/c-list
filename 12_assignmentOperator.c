#include<stdio.h>
int main(){
    int a = 5, c;

    c = a;
    printf("C = %d\n", c);

    c += a ;
    printf("c = %d\n",c);

    c -= a ;
    printf("c = %d\n",c);

    c *= a ;
    printf("c = %d\n",c);

    c /= a;
    printf("c = %d\n",c);

    c%=a ;
    printf("c = %d",c);

    return 0;

}