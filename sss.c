#include <stdio.h>
#define MAX_SIZE 100 
int main()
{
char str[MAX_SIZE];
int a, d, o, i;
a = d = o = i = 0;
printf("Enter any string : ");
gets(str);
while(str[i]!='\0')
{
if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
{
a++;
}
else if(str[i]>='0' && str[i]<='9')
{
d++;
}
else
{
o++;
}
i++;
}
printf("Alphabets = %d\n", alphabets);
printf("Digits = %d\n", digits);
printf("Special characters = %d", others);
return 0;
}
