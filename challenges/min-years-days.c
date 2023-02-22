#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int minutes = 0;
    double years = 0.0, days = 0.0, minInYears = 0;

    printf("Insert minutes: ");
    scanf("%d", &minutes);

    minInYears = (60*24*365);
    years = minutes / minInYears;
    days = (int)(minutes / 60.0) / 24.0;

    printf("Minutes in years: %f \n", years);
    printf("Minutes in days: %f \n", days);
    return 0;
}
