#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
float Edistance(int x1, int x2, int y1, int y2)
{
    float a = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    return sqrt(a);
}
int main()
{
    int x1, x2, y1, y2;
    float dst;
    printf("Enter the value of x1 \n");
    scanf("%d", &x1);

    printf("Enter the value of x2 \n");
    scanf("%d", &x2);

    printf("Enter the value of y1 \n");
    scanf("%d", &y1);

    printf("Enter the value of y2 \n");
    scanf("%d", &y2);

    dst = Edistance(x1, x2, y1, y2);
    float area = (22 * dst * dst) / 7;
    printf("The euclid distance is %.3f\n", dst);
    printf("The area of circle is %.3f", area);
    return 0;
}