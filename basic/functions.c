#include <stdio.h>

void multiplyTwoNumbers(int x, int y); // prototype it

int main(int argc, char const *argv[])
{
    multiplyTwoNumbers(20, 18);
    return 0;
}

void multiplyTwoNumbers(int x, int y) {
    int result = x * y;
    printf("Multiplication result: %d. \n", result);
}