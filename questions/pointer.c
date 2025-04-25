#include <stdio.h>

int main(){

    int a=10;
    int * pntr= &a;
  //  int *caa = a;
    printf("%p\n",pntr);      
  //  printf("%d",caa);


    return 0;
}