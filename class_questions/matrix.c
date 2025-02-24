#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r1,c1,r2,c2;
    printf("enter order of 1st matrix ");
    scanf("%d%d",&r1,&c1);
    printf("enter order of 2nd matrix ");
    scanf("%d%d",&r2,&c2);
    if(r1 != r2 || c1 != c2)
    {
        printf("matrices can not be added !!");
        return 0;
    }
    int **mat1,**mat2,**mat3,i,j;
    
    mat1 = (int **)malloc(r1*sizeof(int *));
    for(i=0;i<r1;i++)
        mat1[i] = (int *)malloc(c1*sizeof(int));

    mat2 = (int **)malloc(r1*sizeof(int *));
    for(i=0;i<r1;i++)
        mat2[i] = (int *)malloc(c1*sizeof(int));

    mat3 = (int **)malloc(r1*sizeof(int *));
    for(i=0;i<r1;i++)
        mat3[i] = (int *)malloc(c1*sizeof(int));

    printf("enter the elements of 1st matrix\n");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&mat1[i][j]);
            
    printf("enter the elements of 2nd matrix\n");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&mat2[i][j]);
    
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            mat3[i][j] = mat1[i][j] + mat2[i][j];
            
    printf("The resultant matrix is\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            printf("%d\t",mat3[i][j]);
        printf("\n");
    }    
    
    return 0;
}