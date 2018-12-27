#include <stdio.h>
void swap(int *a,int *b) 
{
int c;
c=*a; 
*a=*b; 
*b=c;
}
void sort(int d[],int e) { 
int i,j,y;
for(i = 0;i < n-1;i++)
{
for(j = 0;j < n-i-1;j++)
{
if(d[j] > d[j+1])
swap(&d[j],&d[j+1]);
}
}
}
int main() 
{
int d[] = {6,3,8,5,1};
int e = 5;
int v,i;
sort(d,e);
e = (e+1) / 2 - 1;      
printf("Median = %d ", d[e]);
 return 0;
}
