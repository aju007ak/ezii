#include <stdio.h>
#include <stdlib.h>
int num = 210;
int main ( void )
{
if ( (num/ 60) == 1 ) 
printf("%01d hour",num/60);
else
printf("%01d hours",num/60);
if ( (num % 60) == 1) 
printf(" %01d minute\n",num%60);
else 
printf(" %01d minutes\n",num%60);
return 0;
}
