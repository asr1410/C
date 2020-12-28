#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the number one = ");
    scanf("%d",&a);
    printf("Enter the number two = ");
    scanf("%d",&b);
    a = a * b;
    b = a / b;
    a = a / b;
    printf("\n");
    printf("The swapped number are A = %d and B = %d",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n");
    printf("The swapped number are A = %d and B = %d",a,b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\n");
    printf("The swapped number are A = %d and B = %d",a,b);



    
    return 0;
}
