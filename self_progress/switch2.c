#include <stdio.h>
int main(){
    char laugh;
    printf("How hard did you laugh(a,b,c): ");
    scanf("%c",&laugh);


    
    switch(laugh){
        case 'a':
        printf("you laughed");
        break;

        case 'b':
        printf("you laughed more");
        break;

        case 'c':
        printf("you laughed the best.");

    }

    return 0;
}