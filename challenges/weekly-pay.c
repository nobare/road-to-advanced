#include <stdio.h>
#include <stdlib.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40


int main(int argc, char const *argv[])
{
    int hours;
    double gross, taxes, net_pay, overtime;

    printf("Enter the number of hours: ");
    scanf("%d", &hours);

    gross = 12 * hours;

    if (hours <= 40)
        gross = hours * PAYRATE;
    else
        overtime = (hours - 40) * (PAYRATE * 1.5);
        gross = 40 * PAYRATE + overtime;

    if (gross <= 300) 
        taxes = gross * TAXRATE_300;
    else if (gross <= 450)
        taxes = (300 * TAXRATE_300) + ((gross - 300) * TAXRATE_150);
    else 
        taxes = (300 * TAXRATE_300) + (150 * TAXRATE_150) + ((gross - 450) * TAXRATE_REST);

    net_pay = gross - taxes;
    printf("Gross: %.2f, Taxes: %.2f, Net Pay: %.2f", gross, taxes, net_pay);

    return 0;
}
