#include<stdio.h>

int main(){
    int a,b,c;
    printf("Value of a: ");
    scanf("%d",a);
    
    printf("\n Value of b: ");
    scanf("%d",b);

    c=a;
    a=b;
    b=c;
    
    printf("%d", a);
    printf("%d",b);


    return 0;
}