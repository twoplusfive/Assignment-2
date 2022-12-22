//Whether a character entered through a keyboard is a special symbol or not.

#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch=='!'||ch=='@'||ch=='#'||ch=='$'||ch=='%'||ch=='^'||ch=='&'){
        printf("%c is a special character",ch);
    }
    else{
        printf("%c is not a special character",ch);
    }
}

/*
OUTPUT:-
Enter a character:@
@ is a special character
*/