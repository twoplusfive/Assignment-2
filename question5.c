//If the ages of Ram, Shyam and Ajay are input through the keyboard,
// write a program to determine the youngest of the three

#include<stdio.h>
#include<conio.h>
int main()
{
    int ram, shyam, ajay;

    printf("Enter the age of Ram: ");
    scanf("%d", &ram);

    printf("Enter the age of Shyam: ");
    scanf("%d", &shyam);

    printf("Enter the age of Ajay: ");
    scanf("%d", &ajay);

    if (ram<=shyam)
    {
        if(ram<=ajay)
        {
            printf("Ram is the Youngest");
        }
        else
        {
            printf("Ajay is the Youngest");
        }
    }
    else if(shyam<=ajay)
    {
        printf("Shyam is the Youngest");
    }
    else
    {
        printf("Ajay is the Youngest");
    }
    return 0;
}

/*OUTPUT:-
Enter the age of Ram: 12
Enter the age of Shyam: 15
Enter the age of Ajay: 8
Ajay is the Youngest
*/