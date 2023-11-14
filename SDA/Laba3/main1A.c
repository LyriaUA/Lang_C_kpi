#include <stdio.h>

int main()
{
    int n, a;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1)
        {
         printf("Enter n>=1");
         scanf("%d", &n);
        }

    int A[4 * n];

    printf("Enter A %d:",4*n);
    for (int i = 0; i < 4 * n; i++)
        {
        scanf("%d", &A[i]);
        }

    for (int i = 0; i < n; i++)
        {
         a = A[i];
         A[i] = A[2 * n + i];
         A[2 * n + i] = a;

         a = A[2 * n + i];
         A[2 * n + i] = A[3 * n + i];
         A[3 * n + i] = a;

         a = A[3 * n + i];
         A[3 * n + i] = A[n + i];
         A[n + i] = a;

        }

    for (int i = 0; i < n / 2; i++)
    {
        a = A[n + i];
        A[n + i] = A[2 * n - 1 - i];
        A[2 * n - 1 - i] = a;
    }
    printf("Result:\n");
    for (int i = 0; i < 4 * n; i++)
        {
         printf("%d ", A[i]);
        }

    return 0;
}
