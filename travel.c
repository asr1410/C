#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Driver
{
    char name[34];
    char dl_no[34];
    char route[34];
    int kms;
} dr;

int main()
{
    dr d1, d2, d3;
    printf("Enter the details of the Drivers No 1\n");
    printf("Enter the name of first drivers\n");
    scanf("%s", &d1.name);

    printf("Enter the dl_no of first drivers\n");
    scanf("%s", &d1.dl_no);

    printf("Enter the route of first drivers\n");
    scanf("%s", &d1.route);

    printf("Enter the number of kms of first drivers\n");
    scanf("%d", &d1.kms);

    printf("Enter the details of the Drivers No 2\n");
    printf("Enter the name of second drivers\n");
    scanf("%s", &d2.name);

    printf("Enter the dl_no of second drivers\n");
    scanf("%s", &d2.dl_no);

    printf("Enter the route of second drivers\n");
    scanf("%s", &d2.route);

    printf("Enter the number of kms of second drivers\n");
    scanf("%d", &d2.kms);

    printf("Enter the details of the Drivers No 1\n");
    printf("Enter the name of third drivers\n");
    scanf("%s", &d3.name);

    printf("Enter the dl_no of third drivers\n");
    scanf("%s", &d3.dl_no);

    printf("Enter the route of third drivers\n");
    scanf("%s", &d3.route);

    printf("Enter the number of kms of third drivers\n");
    scanf("%d", &d3.kms);

    printf("*****printing informatiion of these drivers******");
    printf("For Driver No 1 \nName is %s\n", d1.name);
    printf("DL no is %s\n", d1.dl_no);
    printf("Route is %s\n", d1.route);
    printf("kms is %d\n", d1.kms);

    printf("*****printing informatiion of these drivers******");
    printf("For Driver No 2 \nName is %s\n", d2.name);
    printf("DL no is %s\n", d2.dl_no);
    printf("Route is %s\n", d2.route);
    printf("kms is %d\n", d2.kms);

    printf("*****printing informatiion of these drivers******");
    printf("For Driver No 3 \nName is %s\n", d3.name);
    printf("DL no is %s\n", d3.dl_no);
    printf("Route is %s\n", d3.route);
    printf("kms is %d\n", d3.kms);

    return 0;
}