#include <stdio.h>
int main()
{
    int a,b, i, c;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);

    while (a < b)
    {
        c= 0;

        for(i = 2; i <= a/2; ++i)
        {
            if(a% i == 0)
            {
                c= 1;
                break;
            }
        }

        if (c== 0)
            printf("%d ", a);

        ++a;
    }

    return 0;
}
