void main()
{
    int y;
 
    printf("Enter a year \n");
    scanf("%d", &y);
    if ((year % 400) == 0)
        printf("%d is a leap year \n", y);
    else if ((year % 100) == 0)
        printf("%d is a not leap year \n", y);
    else if ((year % 4) == 0)
        printf("%d is a leap year \n", y);
    else
        printf("%d is not a leap year \n", y);
}
