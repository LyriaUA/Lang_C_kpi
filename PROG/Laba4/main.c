#include <stdio.h>

void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Input element #%d: ", i);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    printf("Massive: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int calculateSum(int arr[], int size)
{
    int sum = 0;

    if (arr[0] < 0) {
        for (int i = 1; i < size; i += 2)
        {
            sum += arr[i];
        }
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
    }

    return sum;
}

int main()
{
    int A[11];
    int B[10];
    int C[14];

    printf("Input A:\n");
    inputArray(A, 11);
    printf("Input B:\n");
    inputArray(B, 10);
    printf("Input C:\n");
    inputArray(C, 14);

    printf("Print Array:\n");
    printArray(A, 11);
    printArray(B, 10);
    printArray(C, 14);

    int sumA = calculateSum(A, 11);
    int sumB = calculateSum(B, 10);
    int sumC = calculateSum(C, 14);

    printf("Sum A: %d\n", sumA);
    printf("Sum B: %d\n", sumB);
    printf("Sum C: %d\n", sumC);

    return 0;
}
