#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n < 1)
        {
        printf("Enter n >= 1");
        scanf("%d", &n);
        }

    int A[4 * n];
    int B[4 * n];

    printf("Enter array A of size %d: ", 4 * n);
    for (int i = 0; i < 4 * n; i++)
        {
        scanf("%d", &A[i]);
        }

    for (int i = 0; i <n; i++)
        {
         B[i] = A[2 * n + i];
         B[n + i] = A[n - i - 1];
         B[2 * n + i] =  A[3 * n + i];
         B[3 * n + i] = A[n + i];
        }

    printf("Resulting array A:\n");
    for (int i = 0; i < 4 * n; i++)
        {
         A[i] = B[i];
         printf("%d ", A[i]);
        }

    printf("\n");

    return 0;
}
