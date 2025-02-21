#include <stdio.h>
int main(){
    char a;
    int n, h,width;
    float area_of_circle, area_of_triangle, area_of_square, area_of_rectangle;

    area_of_circle = 3.14 * n * n;
    area_of_rectangle = h * width;
    area_of_square = n*n;
    area_of_triangle = 0.5* h * width;


    printf("You can calculate area of the following \n 1. Circle \n 2. Triangle \n 3. Square \n 4. Rectangle \n 5. Exit \n");
    printf("Enter 1,2,3,4,5 based on the above prompt: ");
    scanf("%c",&a);
    if(a == 1 || 2 || 3 || 4){
        if(a==1){
            printf("Enter radius: ");
            scanf("%d",&n);
            printf("\n area of circle is %.2f",area_of_circle);
        }
        else if(a==2){
            printf("Enter height: ");
            scanf("%d",&h);
            printf("Enter width: ");
            scanf("%d",&width);
            
            printf("\n area of triangle is %.2f",area_of_triangle);
        }

        else if(a==3){
            printf("Enter side of square: ");
            scanf("%d",&n);
            
            printf("\n area of square is %.2f",area_of_square);
        }

        else if(a==4){
            printf("Enter height: ");
            scanf("%d",&h);
            printf("Enter width: ");
            scanf("%d",&width);
            
            printf("\n area of rectangle is %.2f",area_of_rectangle);
        }

    }



    else if(a==5){
        
        printf("Loop terminated....");
        
        
    }



    return 0;
}