#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int max = a;
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    if(d > max ){
        max = d;
    }

    return max;
}

int main(){
    int a,b,c,d;
    printf("Enter four numbers separated by space: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int ans = max_of_four(a,b,c,d);
    
    printf("%d is the largest number among them.",ans);


    return 0;
}