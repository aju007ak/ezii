#include <stdio.h>
int main()
{
    long long i;
    int c = 0;

    printf("Enter an integer: ");
    scanf("%lld", &i);

    while(i != 0)
    {
        n /= 10;
        ++c;
    }

    printf("Number of digits: %d", c);
}
