#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
/*
*   More convenient and efficient than writing heaps of elseif
*/
    enum Weekday { Monday, Tuesday, Wednesday, Thursday };
    enum Weekday today = Monday;

    switch (today) {
    case Monday :
        printf("Today is Monday \n");
        break;
    case Tuesday :
        printf("Today is Tuesday \n");
        break;
    case Wednesday :
        printf("Today is Wednesday \n");
        break;
    case Thursday :
        printf("Today is Thursday \n");
        break;
    default:
        printf("Whatever \n");
        break;
    }

    float value1, value2;
    char operator;

    printf("Type you expression. \n");
    scanf("%f %c %f", &value1, &operator, &value2);

    switch (operator) {
    case '+' :
        printf("%.2f \n", value1 + value2);
        break;
    case '-' :
        printf("%.2f \n", value1 - value2);
        break;
    case '*' :
        printf("%.2f \n", value1 * value2);
        break;
    case '/' :
        if (value2 == 0)
            printf("Division by zero \n");
        printf("%.2f \n", value1 / value2);
        break;
    default:
        printf("Unknown operator. \n");
        break;
    }

    return 0;
}
