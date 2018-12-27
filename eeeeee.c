#include <stdio.h>
 
int main()
{
    int array[100], a,b, c, d = 1;
   
    printf("Enter number of elements in array\n");
    scanf("%d", &b);
   
    printf("Enter %d integers\n",b);
   
    for (c = 0; c < b; c++)
        scanf("%d", &array[c]);
   
    a = array[0];
   
    for (c = 1; c < b; c++)
    {
        if (array[c] < a)
        {
          a = array[c];
           d = c+1;
        }
    }
   
    printf("Min element is present at loc %d and its value is %d.\n", d, a);
    return 0;
}
