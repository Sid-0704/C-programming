#include <stdio.h>
#include <limits.h>
#include <float.h>


int main(){
    
    printf("Range of char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Range of int: %d to %d \n",INT_MIN, INT_MAX);
    printf("Range of float: %f to %f \n",FLT_MIN, FLT_MAX);
    printf("Range of long: %d to %d \n",LONG_MIN,LONG_MAX);


    return 0;

}