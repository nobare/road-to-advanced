#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) 
{
    int iterador, condition;

    condition = iterador;
    for (iterador = 5; iterador > 0; --iterador)
        printf("%d ", iterador);
    
    for (iterador = 0; iterador < 10; ++iterador)
        printf("%d ", iterador);
    return 0;

}