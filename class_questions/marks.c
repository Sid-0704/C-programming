#include <stdio.h>
int main(){
    int avg, marks[10], i, above_60 = 0 , below_60 =0 ;


    for(i=0; i<10; i++){
        

        printf("enter marks of 10 students: ");
        scanf("%d",&marks[i]);

        if(marks[i]<0 || marks[i]>100){
            printf("invlid input..... \n");
            i--;
            continue;
        }

        if(marks[i] >= 60){
            above_60 +=1;
        }

        if(marks[i]<60){
            below_60 +=1;
        }

    }

    for(i=0;i<10;i++){
        printf("mark of student %d is %d \n",i+1,marks[i]);
    }
    
    avg = (marks[0] +marks[1] +marks[2] +marks[3] +marks[4] +marks[5] +marks[6] +marks[7] +marks[8] +marks[9]) /10;
    
    printf("The average marks of the class is: %d \n",avg);
    
    printf("Students scoring above 60 are %d \n",above_60);
    
    printf("Students scoring below 60 are %d \n",below_60);


    return 0;
}