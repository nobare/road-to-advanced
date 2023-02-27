#include <stdio.h>
#include <stdlib.h>

int main2(int argc, char const *argv[])
{
    int count = 10;
    long sum = 10;
    float average = 0.0f;

    int grades[10] = {0};

    printf("\n Enter the 10 grades: \n");

    for(int i = 0; i < count; ++i) 
    {
        printf("%2u> ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = sum / 10;
    printf("Average grade: %.2f", average);

    return 0;
}

#define MONTHS 12

int main(int argc, char const *argv[])
{
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for (size_t i = 0; i < MONTHS; i++)
    {
        printf("Month %d has %d days. \n", i + 1, days[i]);
    }

    int matrix[2][3] = {
        {1, 2, 3},
        {'a', 'b', 'c'}
    };

    return 0;
}


