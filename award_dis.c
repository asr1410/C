#include<stdio.h>
int main()
{
    int a,i;
    printf("passed math exam press 1\n");
    printf("passed science exam press 2\n");
    printf("passed math and science exam press 3\n");
    printf("enter the option = ");
    scanf("%d",&a);
    if (a==1||a==2)
    {
        printf("your award is 15$");
    }
    else if (a==3)
    {
        printf("your award is 45$");
    }
    else
    {
        printf("you are entering wrong option");
    }
    return 0;
}
