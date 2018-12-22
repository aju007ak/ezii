#include <stdio.h>
int main()
{
    int n, o, rem, r= 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &number);

    o= n;

    while (o!= 0)
    {
        rem= o%10;
        r+= rem*rem*rem;
        o /= 10;
    }

    if(r== n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    return 0;
}
