// FELIPE BITTAR MARTINIANO
// 11202130044

#include <stdio.h>
int busca(int valores[], int n, int chave)
{

    for (int i = 0; i < n; i++)
    {
        if (valores[i] == chave)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int valores[10000];

    int n, chave;
    printf("Digite o numero de valores dentro do vetor: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%s %d %s", "Digite o valor do", i+1 , "numero do vetor: ");
        scanf("%d", &valores[i]);
    }
    printf("Digite a chave: ");
    scanf("%d", &chave);

    int res = busca(valores, n, chave);
    printf("%d", res);

    return 0;
}
