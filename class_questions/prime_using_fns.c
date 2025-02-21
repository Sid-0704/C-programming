#include <stdio.h>

void prime(){
    int a,b,c;
    printf("Enter a value: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("It is not prime");
    }
    else{
        printf("It is prime");
    }
    
}
int main(){

    prime();


    return 0;
}