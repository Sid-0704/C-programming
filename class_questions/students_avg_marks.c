#include <stdio.h>

int main(){
    int students;
    int i = 0;
    int roll[i];
    
    int  mark01[i],mark02[i],mark03[i],mark04[i],mark05[i];
    float avg[i];
    char name[i][50];
    
    printf("Enter the number of students: ");
    scanf("%d",&students);

    while (i<students)
    {    
        printf("Enter Name: ");
        getchar();
        scanf("%[^\n]s",name[i]);
        printf("Enter roll no: ");
        scanf("%d",&roll[i]);
        printf("Enter mark of 1st subject: ");
        scanf("%d",&mark01[i]);
        printf("Enter mark of 2nd subject: ");
        scanf("%d",&mark02[i]);
        printf("Enter mark of 3rd subject: ");
        scanf("%d",&mark03[i]);
        printf("Enter mark of 4th subject: ");
        scanf("%d",&mark04[i]);
        printf("Enter mark of 5th subject: ");
        scanf("%d",&mark05[i]);
        avg[i]= (mark01[i]+mark02[i]+mark03[i]+mark04[i]+mark05[i])/5.00;
        
        i++;


    }
    i = 0;

    while(i<students)
    {

        printf("For roll no %d, marks are as follows: \n",roll[i]);
        printf("Name of the student is %s\n",name[i]);
        printf("1st subject marks: %d\n",mark01[i]);
        printf("2nd subject marks: %d\n",mark02[i]);
        printf("3rd subject marks: %d\n",mark03[i]);
        printf("4th subject marks: %d\n",mark04[i]);
        printf("5th subject marks: %d\n",mark05[i]);
        
        printf("The average marks of this student is: %.2f\n",avg[i]);
        
        i++;

    }



    return 0;
}