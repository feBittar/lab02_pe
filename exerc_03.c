// FELIPE BITTAR MARTINIANO
// 11202130044
#include <stdio.h>

void lerNNumeros(int n, int array[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%s %d %s", "Digite o", i + 1, "valor do array: ");
        scanf("%d", &array[i]);
    }
}

void ordena(int valores[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (valores[j] > valores[i])
            {
                int a = valores[j];
                valores[j] = valores[i];
                valores[i] = a;
            }
        }
    }
}

int main()
{
    int n;
    int array[1000];

    printf("Digite o numero de valores no array: ");
    scanf("%d", &n);
    lerNNumeros(n,array);
    ordena(array, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d %s", array[i], " ");
    }

    return 0;
}