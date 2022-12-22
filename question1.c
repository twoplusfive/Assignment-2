//1.	Any integer is input through the keyboard.
// Write a program to find out whether it is an odd number or even number.

#include <stdio.h>
void oddEven(int n)
{
    if (n % 2 == 0)
    {
        printf("Even");
    }
    else if (n % 2 == 1)
    {
        printf("Odd");
    }
    else
    {
        printf("Invalid Input");
    }
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    oddEven(n);
    return 0;
}

/*OUTPUT:-
Enter a number:10
Even
*/