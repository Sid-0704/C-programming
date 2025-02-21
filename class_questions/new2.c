#include <stdio.h>

int main(){
    int n1,n2;
    printf("Enter first number: ");
    scanf("%d",&n1);
    int f=0,s=1,n;
    n = f+s;
    while(n<n1){
        f=s;
        s=n;
        n=f+s;
    }
if(n==n1)
printf("YES");


else
printf("NO");
    

    return 0;
}