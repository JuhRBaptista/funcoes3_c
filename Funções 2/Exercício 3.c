#include <stdio.h>

void função (int* vetor)
{
    int  contador;

    for (contador = 2; contador >= 0; contador --)
    {
        printf ("\n%d", vetor[contador]);
    }
}

int main ()
{
    int vetor[3], contador;

    for (contador = 0; contador < 3; contador++)
    {
        printf ("Insira um valor para a posição %d do vetor: ", contador+1);
        scanf ("%d", &vetor[contador]);
    }
    função (vetor);
    
    printf ("\n\n\n\n\n\n");
    return 0;
}