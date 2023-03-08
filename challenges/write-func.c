#include <stdio.h>
#include <stdlib.h>

int gcd(int arg1, int arg2);
float absolute(float arg1);
float squareRoot(float arg1);

int main()
{
    int result = 0;

    float  f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int    i1 = -716;
    float absoluteResult = 0.0;

    result = gcd(150, 35);
    printf("The gcd of 150 and 35 is %d\n", result);

    result = gcd(1026, 405);
    printf("The gcd of 1026 and 405 is %d\n", result);

    printf("The gcd of 83 and 240 is %d\n\n\n\n", gcd(83, 240));

    /* testing absolute Value Function */
    absoluteResult = absolute (f1);
    printf ("result = %.2f\n", absoluteResult);
    printf ("f1 = %.2f\n", f1);

    absoluteResult = absolute (f2) + absolute (f3);
    printf ("result = %.2f\n", absoluteResult);

    absoluteResult = absolute ( (float) i1 );
    printf ("result = %.2f\n", absoluteResult);

    absoluteResult = absolute (i1);
    printf ("result = %.2f\n", absoluteResult);

    printf ("%.2f\n\n\n\n", absolute (-6.0) / 4 );

    printf("%.2f\n", squareRoot(-3.0));
    printf("%.2f\n", squareRoot(16.0));
    printf("%.2f\n", squareRoot(25.0));
    printf("%.2f\n", squareRoot(9.0));
    printf("%.2f\n", squareRoot(225.0));

    /* testing square root */

    return 0;
}

int gcd(int arg1, int arg2)
{
    int temp;

    while(arg2 != 0) {
        temp = arg1 % arg2;
        arg1 = arg2;
        arg2 = temp;
    }

    return arg1;
}

float squareRoot(float arg1)
{
    const float epsilon = .00001;
    float guess = 1.0;
    float returnValue = 0.0;

    if ( arg1 < 0 ) {
        printf ("Negative argument to squareRoot.\n");
        returnValue = -1.0;
    } else {
        while  ( absolute (guess * guess - arg1) >= epsilon )
           guess = ( arg1 / guess + guess ) / 2.0;

        returnValue = guess;
    }

    return returnValue;
}

float absolute(float arg1)
{
    if (arg1 < 0)
        arg1 = -arg1;

    return arg1;
}
