#include<stdio.h>
#include<conio.h>
 void main()
{
int a[100],a,b,c,d,e;
clrscr();
printf("how many number \n");
scanf("%d",&c);
printf("enter the %d number\n",c);
for(d=0;d<c;d++)
scanf("%d",&a[d]);
a=a[0];
b=a[0];
for(d=1;d<c;d++)
{
if(a[d]a) h =a[d];
if(a[d]<b) l =a[d];
}
printf("highest no = %5d\nlowest no = %5d\n",a,b);
getch();
 }
 
