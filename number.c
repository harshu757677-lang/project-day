#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The number is an integer\n" );
    if (n>0)
     {
        printf("The number is positive\n");
    }
    else if (n<0) 
    {
        printf("The number is negative\n");
    }
        else 
        {
            printf("The number is zero\n");
        }
    
     if (n%2==0)
    { 
        printf("The number is even\n");
    }
    else {
        printf("The number is odd\n");
    }
    if (n>0)
    {
        printf("The square of the number %d\n", n*n);
        printf("The cube of the number is %d \n", n*n*n);
    }
    return 0; 
}