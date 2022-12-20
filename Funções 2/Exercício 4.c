# include <stdio.h>

void maiorValor (int* matriz[5][5])
{
    int maiorValor=0, linhaDoMaiorValor, colunaDoMaiorValor, linha, coluna;

    for (linha=0; linha <5; linha++)
    {
        for (coluna=0; linha < 5; linha++)
        {
            if (*matriz[linha][coluna] > maiorValor)
            {
                maiorValor = *matriz[linha][coluna];
                linhaDoMaiorValor = linha;
                colunaDoMaiorValor = coluna;
            }
        }
    }

    printf ("Maior valor: %d\nLinha do maior valor: %d\nColuna do maior valor: %d", maiorValor, linhaDoMaiorValor, colunaDoMaiorValor);
}

int main ()
{
    int matriz[5][5], linha, coluna;

     for (linha=0; linha <5; linha++)
    {
        for (coluna=0; coluna < 5; coluna++)
        {
           printf ("Insira um valor para a linha %d, coluna %d: ", linha, coluna);
           scanf ("%d", &matriz[linha][coluna]);
        }
        printf ("\n");
    }

    maiorValor(matriz);
    return 0;
}