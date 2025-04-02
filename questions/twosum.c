#include <stdio.h>


int main(){
    
    int arr[5],targetvalue;
    
    printf("Enter the target value: ");
    scanf("%d",&targetvalue);
    
    printf("Enter 5 values of the array: ");

    for(int i=0; i<=4; i++){

        scanf("%d",&arr[i]);

    }

    //for(int m = 0; m<=4; m++){
        // printf("%d\n",arr[m]);


    //}

    int z = 0;

    for(z = 0; z<=4 ; z++){

        int the_sum = arr[z] + arr[z+1];

        if(the_sum == targetvalue){

            break;
        }
    }
    printf("index no \"%d\" and \"%d\" of the array will add up to make \"%d\"",z,z+1,targetvalue);

    return 0;
}