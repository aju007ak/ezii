#include <stdio.h>
int main()
{
    int num,a;

    printf("Enter a positive integer: ");
    scanf("%d",&num);

    printf("Factors of %d are: ", num);
    for(a=1; a<= num; ++a)
    {
        if (num%a == 0)
        {
            printf("%d ",a);
        }
    }

    return 0;
}
