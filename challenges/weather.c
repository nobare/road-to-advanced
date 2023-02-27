#include <stdlib.h>
#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int main(int argc, char const *argv[])
{
    float rain[YEARS][MONTHS] = 
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 1.2, 1.5, 1.2, 1.6},
        {2.5, 2.5, 4.3, 3.0, 7.0, 3.9, 0.9, 1.9, 3.7, 3.5, 2.5, 2.5},
        {4.2, 4.2, 4.3, 3.2, 5.1, 2.5, 4.5, 0.2, 2.2, 2.5, 1.2, 1.5},
        {2.7, 5.1, 5.1, 3.0, 2.0, 3.5, 1.5, 6.5, 3.6, 5.5, 1.2, 1.6},
        {5.7, 5.7, 2.5, 5.1, 7.0, 1.7, 0.7, 0.7, 1.2, 1.5, 1.2, 3.6}
    };

    int year, month;
    float subtotal, total;

    printf("YEAR \t\t RAINFALL (inches) \n");

    for (year = 0, total = 0; year < YEARS; year++)
    {
        for (month = 0, subtotal = 0; month < MONTHS; month++)
            subtotal += rain[year][month];

        printf("%5d %15.1f \n", 2010 + year, subtotal);
        total += subtotal;
    }

    printf("\n The yearly average is %.1f inches. \n\n", total/YEARS);

    printf("MONTHLY AVERAGES: \n\n");
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec \n");

    for (month = 0; month < MONTHS; month++)
    {
        for (year = 0; year < YEARS; year++)
            subtotal += rain[year][month];

        printf("%4.1f ", subtotal/YEARS);
    }

    return 0;
}
