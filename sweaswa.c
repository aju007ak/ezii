#include <stdio.h>
#include <string.h>
 
int main()
{
   char a[100];
 
   printf("Enter a string to reverse\n");
   gets(a);
 
   strrev(a);
 
   printf("Reverse of the string is \n%s\n", a);
 
   return 0;
}
