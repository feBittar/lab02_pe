// FELIPE BITTAR MARTINIANO
// 11202130044
#include <stdio.h>

//
// OBSERVAÇÃO!!! Fiz com matrizes de tamanho máximo 100 pois estava dando erro no VSCode na hora de rodar o código quando usava 1000!
//

void lerMatriz(int M[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%s %d %s %d %s", "Digite a casa", i, "|", j, ": ");
            scanf("%d", &M[i][j]);
        }
    }
}

void somaMatriz(int A[][100], int B[][100], int n, int m, int res[][100])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            res[i][j] = A[i][j] + B[i][j];
        }
    }
}

void imprimirMatriz(int res[][100], int n, int m)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d", res[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n, m;

    printf("Digite um valor para n: ");
    scanf("%d", &n);
    getchar();
    printf("Digite um valor para m: ");
    scanf("%d", &m);
    getchar();

    int A[100][100], B[100][100], C[100][100];

    printf("Valores para a Matriz A: --------\n");
    lerMatriz(A, n, m);

    printf("Valores para a Matriz B: --------\n");
    lerMatriz(B, n, m);

    somaMatriz(A, B, n, m, C);

    imprimirMatriz(C, n, m);
    
    return 0;
}