#include <stdio.h>
int main()
{
int a, rev= 0, r, or;

    printf("Enter an integer: ");
    scanf("%d", &a);

    or =a;

    
    while( a!=0 )
    {
        r= a%10;
        rev= rev*10 + r;
        a /= 10;
    }

   
    if (or == rev)
        printf("%d is a palindrome.", or);
    else
        printf("%d is not a palindrome.", or);
    
    return 0;
}
