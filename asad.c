#include <stdio.h>
int main()
{
char str1[50], str2[50],a,b;
printf("\nEnter first string: ");
scanf("%s",str1);
printf("\nEnter second string: ");
scanf("%s",str2);
for(a=0; str1[a]!='\0'; ++a); 
for(b=0; str2[b]!='\0'; ++b, ++a)
{
str1[a]=str2[b];
}
str1[a]='\0';
printf("\nOutput: %s",str1);
return 0;
}
