#include <stdio.h>
#include <conio.h>
int main()
{
    float a;
    int n;
    printf("# Measurement Converter \n");
    printf("1.Pound into Kilogram\n");
    printf("2.Gallon into Litre\n");
    printf("3.Dollar into Rupee\n");
    printf("4.Celcius into Kelvin\n");
    printf("5.Litre into Cubic Metre\n");
    while (1)
    {
        printf("Enter the option : ");
        scanf("   %d", &n);
        switch (n)
        {
        case 1:
            printf("Enter the value in pound : ");
            scanf("%f", &a);
            printf("%0.2f Pound is equal to %0.3f Kilogram", a, a * 0.453592);
            break;
        case 2:
            printf("Enter the value in Gallon : ");
            scanf("%f", &a);
            printf("%0.2f Gallon is equal to %0.3f Litre", a, a * 3.78541);
            break;
        case 3:
            printf("Enter the value in Dollar: ");
            scanf("%f", &a);
            printf("%0.2f Dollar is equal to %0.3f Rupee", a, a * 73.71);
            break;
        case 4:
            printf("Enter the value in Celcius : ");
            scanf("%f", &a);
            printf("%0.2f Celcius is equal to %0.3f Kelvin", a, a + 273.15);
            break;
        case 5:
            printf("Enter the value in Litre : ");
            scanf("%f", &a);
            printf("%0.2f Litre is equal to %0.3f Cubic Metre", a, a * 0.001);
            break;
        default:
            printf("Enter the given values");
            break;
        }
        printf("\n");
    }

    return 0;
}
