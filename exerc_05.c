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

void transporMatriz(int M[][100], int n, int m)
{
    int transposta[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            transposta[j][i] = M[i][j];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            M[i][j] = transposta[i][j];
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

    int A[100][100];
    printf("Valores para a Matriz A: --------\n");

    lerMatriz(A, n, m);

    transporMatriz(A, n, m);

    imprimirMatriz(A, m, n);

    return 0;
}