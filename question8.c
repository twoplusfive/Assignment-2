//Write a program to find the greatest of the three numbers
// entered through the keyboard using conditional operator

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    (a>b&&a>c?printf("%d is greatest number",a):b>c?printf("%d is greatest number",b):printf("%d is greatest number",c));
}

/*OUTPUT:-
Enter three numbers:8 5 4
8 is greatest number
*/