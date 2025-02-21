#include <stdio.h>


int min_of_four(int a, int b, int c, int d){
    int min = a;
    if(min > b){
        min = b;
    }
    if(min > c){
        min = c;
    }
    if(min > d){
        min = d;
    }
    return min;
}


int main(){
    int a,b,c,d;
    printf("Enter the four numbers separated by space: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int ans = min_of_four(a,b,c,d);

    printf("%d is the smallest number among them.",ans);
    
    return 0;
}