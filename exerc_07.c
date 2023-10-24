// FELIPE BITTAR MARTINIANO
// 11202130044
#include <stdio.h>

//
// OBSERVAÇÃO!!! Fiz com matrizes de tamanho máximo 100 pois estava dando erro no VSCode na hora de rodar o código quando usava 1000!
//

void lerMatriz(int M[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            printf("%s %d %s %d %s", "Digite a casa", i, "|", j, ": ");
            scanf("%d", &M[i][j]);
        }
}

void imprimirMatriz(int res[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }
}

void trocarLinhas(int A[][100], int n, int m, int i, int j)
{
    int aux[100];

    for (int k = 0; k < m; k++)
        aux[k] = A[i][k];
    for (int k = 0; k < m; k++)
        A[i][k] = A[j][k];
    for (int k = 0; k < m; k++)
        A[j][k] = aux[k];
}

int main()
{
    int n, m, i, j;

    printf("Digite um valor para n: ");
    scanf("%d", &n);
    getchar();
    printf("Digite um valor para m: ");
    scanf("%d", &m);
    getchar();
    printf("Digite um valor para i: ");
    scanf("%d", &i);
    getchar();
    printf("Digite um valor para j: ");
    scanf("%d", &j);
    getchar();

    int A[100][100];

    printf("Valores para a Matriz A: --------\n");
    lerMatriz(A, n, m);
    trocarLinhas(A, n, m, i, j);
    imprimirMatriz(A, n, m);
    
    return 0;
}