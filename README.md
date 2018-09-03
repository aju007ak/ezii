#include <stdio.h>
int main()
{
    char a;
    printf("Enter any name ");
    scanf("%c",&a);

    if( (a>='a' && a<='z') || (a>='A' && a<='Z'))
        printf("The entered character %c is an Alphabet",a);
    else
        printf("The entered character %c is not an Alphabet",a);

    return 0;
}
