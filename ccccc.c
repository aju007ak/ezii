#include <stdio.h>
int main()
{
char    str[100];
int countDig,countAlp,countSpec,count;
int c;
 
    countDig=countAlp=countSpec=count=0;
 
    printf("Enter a string: ");
    gets(str);
 
    for(c=0;str[c]!=NULL;c++)
    {
 
        if(str[c]>='0' && str[c]<='9')
            countDig++;
        else if((str[c]>='A' && str[c]<='Z')||(str[c]>='a' && str[c]<='z'))
            countAlp++;
        else if(str[c]==' ')
            count++;
        else
            countSpec++;
    }
 
    printf("\nDigits: %d \nAlpha: %d \nSpaces: %d \nSpecial Characters: %d",countDig,countAlp,count,countSpec);
 
    return 0;
}
