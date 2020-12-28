#include<stdio.h>
int main()
{
    int a, i=1;
    printf("Enter the number for table = ");
    scanf("%d",&a);
    do
    {
        printf("%d X %d = %d",a,i,a*i);
        printf("\n");
        i++;
    } while (i<=10);

    while(i<=20)
    {
        printf("%d X %d = %d",a,i,a*i);
        printf("\n");
        i++;
    }
    for ( i = i; i < 31; i++)
    {
        printf("%d X %d = %d",a,i,a*i);
        printf("\n");
    }
    
    
    return 0;
}
