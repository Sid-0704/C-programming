#include <stdio.h>
int main(){

    int n,i,j,k,l;
    printf("Enter the value of n: ");
    scanf("%d",&n);


    for(i=1;i<=n;i++){
        for(j=n-i;j>=1;j--)
        printf(" ");
        for(k=1;k<=i;k++)
        printf("%d",k);
        for(l=i-1;l>=1;l--)
        printf("%d",l);

        printf("\n");
    }



    for(i=1;i<=n-1;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(k=1;k<=n-i;k++){
            printf("%d",k);
        }
        for(l=n-i-1;l>=1;l--){
            printf("%d",l);
        }

        printf("\n");
    }
    
    

    
    
    
    return 0;

}