#include <stdio.h>
int main()
{
    int a,b,f= 0;

    printf("Enter a positive integer: ");
    scanf("%d", &a);

    for(b = 2;b<= a/2; ++b)
    {
   
        if(a%b == 0)
        {
            f= 1;
            break;
        }
    }

    if (a == 1) 
    {
      printf("1 is neither a prime nor a composite number.");
    }
    else 
    {
        if (f == 0)
          printf("%d is a prime number.", a);
        else
          printf("%d is not a prime number.", a);
    }
    
    return 0;
}
