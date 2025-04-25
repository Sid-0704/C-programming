#include <stdio.h>

int main(){
    char this_is_char, strings[25];
    printf("Write any character: ");
    this_is_char = getchar();

    printf("You wrote %c\n",this_is_char);

    printf("Try to write a string: ");
    gets(strings);
    printf("%s",strings);

    
    
    return 0;
}