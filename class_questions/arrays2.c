#include <stdio.h>
int main()
{
    int no_of_students;
    int marks[20],i,sum=0,ba=0,temp,j;

    printf("Enter the number of students: ");
    scanf("%d",&no_of_students);

    printf("enter marks of %d students \n",no_of_students);
    for(i=0;i<no_of_students;i++)
    {
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }



    printf("sum of marks of all the students is %d\n",sum);
    float avg;
    avg = (float) sum/no_of_students;
    
    
    printf("average marks of %d students = %d\n",no_of_students,avg);
    for(i=0;i<no_of_students;i++)
    {
        if(marks[i] < avg)
            ba++;
    }


    printf("number of students scoring below average are %d\n",ba);
    for(i=0;i<no_of_students;i++)
        for(j=0;j<20-i;j++)
        {
            if(marks[j] > marks[j+1])
            {
                temp = marks[j];
                marks[j] = marks[j+1];
                marks[j+1] = temp;
            }
        }
    
    return 0;
}