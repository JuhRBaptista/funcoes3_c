#include <stdio.h>

int função (int* vetor)
{
    int quantidadeDeNumerosNegativos = 0, contador;

    for (contador = 0; contador <3; contador ++)
    {
        if (vetor[contador] < 0)
        {
            quantidadeDeNumerosNegativos = quantidadeDeNumerosNegativos + 1;
        }
    }
    return (quantidadeDeNumerosNegativos);
}

int main ()
{
    int vetor[3], resultado, contador;

    for (contador = 0; contador < 3; contador++)
    {
        printf ("Insira um valor para a posição %d do vetor: ", contador+1);
        scanf ("%d", &vetor[contador]);
    }

    resultado = função(vetor);

    printf ("\nEsse vetor possui %d números negativos.", resultado);
    
    printf ("\n\n\n\n\n\n");
    return 0;
}