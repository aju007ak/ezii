#include <stdio.h>
int main()
{
    int a, rev= 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &a);

    while(a != 0)
    {
        rem= a%10;
        rev= rev*10 + rem;
        n /= 10;
    }

    printf("Rev= %d", rev);

    return 0;
}
