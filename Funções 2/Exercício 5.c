#include <stdio.h>

int main ()
{
    float numero, soma=0;
    int contador = 1;

    do
    {
        printf ("Insira um número: ");
        scanf ("%f", &numero);
        soma= soma + numero;
        contador ++;
    }
    while (contador <= 10);
    printf ("Soma: %.2f", soma);
    return 0;
}