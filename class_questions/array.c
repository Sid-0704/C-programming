#include <stdio.h>

int main(){
    int arr[10];
    int num;

    printf("How many values you want to print: ");
    scanf("%d",&num);
    printf("Enter %d values:",num);

    for(int i=0; i<num; i++){
        scanf("%d",arr[i]);
    }

    for(int i=0;i<num;i++){
        
        

        
        printf( " %d ",arr[i]);
        
    }


}