// FELIPE BITTAR MARTINIANO
// 11202130044
#include <stdio.h>

void invertArray(int array[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[j] < array[i])
            {
                int a = array[j];
                array[j] = array[i];
                array[i] = a;
            }
        }
    }
}
void lerNNumeros(int n, int array[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%s %d %s", "Digite o", i + 1, "valor do array: ");
        scanf("%d", &array[i]);
    }
}

int main()
{
    int n;
    int array[1000];

    printf("Digite o numero de valores no array: ");
    scanf("%d", &n);
    lerNNumeros(n,array);
    invertArray(array, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d %s", array[i], " ");
    }

    return 0;
}