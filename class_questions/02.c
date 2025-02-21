#include <stdio.h>
#include <stdlib.h>
int main()
{
    int count =0 , n=5, pow =1;

    do{
        pow*=n;
        count++;
        n--;

    }
    while(pow <=100 );{
        printf("%d", count);
    }
    return 0;

    
}
