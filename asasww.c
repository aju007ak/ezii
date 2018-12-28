#include <stdio.h>
int main()
{
    int a,b;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&b);

    
    if (a < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(b=1; b<=a; ++b)
        {
            factorial *= a;            
        }
        printf("Factorial of %d = %llu", a, factorial);
    }

    return 0;
}
