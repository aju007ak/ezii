#include <stdio.h>
int main()
{
    int a,b,s= 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&a);

    for(i=1;i<= a; ++i)
    {
        s+= i;   
    }

    printf("S= %d",s);

    return 0;
}
