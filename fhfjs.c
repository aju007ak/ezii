#include <stdio.h>
#include <string.h>
void swap(int*, int *);
void main()
{
int a,b;
printf("\nEnter two numbers:");
scanf("%d %d", &a, &b);
printf("\nThe numbers before swapping are Number1= %d Number2 = %d",a,b);
swap(&num1, &num2);    
printf("\nThe numbers after swapping are Number1= %d Number2 = %d",a,b);
}
void swap(int *c, int *d)
{
    *c = *c ^ *d;
    *d = *c ^ *d;
    *c = *c ^ *d;
}
