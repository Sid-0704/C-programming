#include <stdio.h>

int main(){
    int radius;
    float area,circumference;
    printf("Enter the radius of the circle: ");
    scanf("%d",&radius);
    area = (float) radius * radius * 3.14;
    circumference = (float) 2 * 3.14 * radius;
    printf("The circumference of the circle is %.2f\nThe area of the circle is %.2f",circumference,area);


    return 0;
}