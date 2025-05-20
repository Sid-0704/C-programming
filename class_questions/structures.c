#include <stdio.h>
#include <string.h>
struct NewStruct {  
    int structNum;       
    char structLetter;   
};

struct hello{
    int count;
    char name[4];
};


int main(){
    struct NewStruct this_is_struct;
    struct hello h1;

    this_is_struct.structNum = 15;
    this_is_struct.structLetter = 'S';
    
    h1.count = 0;
    strcpy(h1.name,"Sid");
    printf("the name of the user is: %s\n",h1.name);

    printf("This is structure number size: %d\n",sizeof(this_is_struct.structNum));

    printf("This is structure number size: %d\n",sizeof(this_is_struct.structLetter));
    
    
    return 0;
}