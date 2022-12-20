#include <stdio.h>

void funcao(float variavel1, float variavel2)
{
    float auxiliar;

    auxiliar = variavel1;
    variavel1 = variavel2;
    variavel2 = auxiliar;

    printf ("Variável 1: %.2f; variável 2: %.2f", variavel1, variavel2);
}

int main ()
{
    float variavel1, variavel2;

    printf ("Insira um valor para variável 1: ");
    scanf ("%f", &variavel1);

    printf ("Insira um valor para variável 2: ");
    scanf ("%f", &variavel2);

    funcao(variavel1, variavel2);
    return 0;
}