#include <stdio.h>
 
void main()
{
    int i, a, b = 0;
 
    printf("Enter an integer number \n");
    scanf ("%d", &a);
    for (i = 1; i <= a; i++)
    {
        b= b+ i;
    }
    printf ("Sum of first %d natural numbers = %d\n", a, b;
}
