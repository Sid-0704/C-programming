#include <stdio.h>
#include <math.h>

int area_of_triangle(){
    int a,b,c,s;
    double first,second,third,oldarea,newarea;

    printf("Enter value of 1st side of triangle: ");
    scanf("%d",&a );
    printf("Enter value of 2nd side of triangle: ");
    scanf("%d",&b);
    printf("Enter value of 3rd side of triangle: ");
    scanf("%d",&c);

    s=(a+b+c)/2;
    printf("The value of s is %d \n",s);
    
    first = s-a;
    second= s-b;
    third= s-c;

    oldarea = s *(first) * (second) *(third); 
    newarea = pow(oldarea,0.5);
    printf("the total area of the triangle is %.2f",newarea); 



    return 0;    
}



int main(){

    area_of_triangle();
    return 0;
}