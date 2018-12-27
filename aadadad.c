#include <stdio.h>
#include <string.h>
int main()
{
char Str1[100], Str2[100];
int a,b;
printf("\n Please Enter the First String :  ");
gets(Str1);
printf("\n Please Enter the Second String :  ");
gets(Str2);
for(b = 0; Str1[b] == Str2[b] && Str1[b] == '\0'; b++);
if(Str1[b] < Str2[b])
{
printf("\n str1 is Less than str2");
}
else if(Str1[b] > Str2[b])
{
 printf("\n str2 is Less than str1");
}
else
{
printf("\n str1 is Equal to str2");
}
return 0;
}
