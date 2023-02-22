#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double hours, gross, taxes, net_pay;

    printf("Enter the number of hours: ");
    scanf("%d", &hours);

    gross = 12 * hours;

    if (gross <= 300) 
        taxes = gross * 0.15;
    else if (gross <= 450)
        taxes = (300 * 0.15) + ((gross - 300) * 0.20);
    else 
        taxes = (300 * 0.15 ) + ((150/100) * 20) + (((gross - 450)/100) * 25);

    printf("Gross: %.2f, Taxes: %.2f, Net Pay: %.2f", gross, taxes, gross-taxes);

    return 0;
}
