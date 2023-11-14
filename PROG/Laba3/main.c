#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(int i, int j, int n)
{
    return 4 * fabs(8.5 - i) - 1.5 * j * j + 2;
}

double g(double **A, int n)
{
    double max_ratio = 0;
    for (int i = 0; i < n; i++)
    {
        double min_xj = fabs(A[i][0]);
        for (int j = 0; j < n - 1; j++)
        {
            double abs_xj = fabs(A[i][j]);
            if (abs_xj < min_xj)
            {
                min_xj = abs_xj;
            }
        }
        double abs_xi = fabs(A[i][i]);
        double ratio = min_xj / (abs_xi + 0.5);
        if (ratio > max_ratio)
        {
            max_ratio = ratio;
        }
    }
    return max_ratio;
}

int main()
{
    int n;
    printf("Enter the size of the matrix and vector: ");
    scanf("%d", &n);

    double **A = (double **)malloc(n * sizeof(double *));
    for (int i = 0; i < n; i++)
    {
        A[i] = (double *)malloc(n * sizeof(double));
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = f(i, j, n);
        }
    }

    printf("Matrix A:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.2f\t", A[i][j]);
        }
        printf("\n");
    }

    double *X = (double *)malloc(n * sizeof(double));
    for (int j = 0; j < n - 1; j++)
    {
        double min_xj = fabs(A[0][j]);
        for (int i = 0; i < n; i++)
        {
            double abs_xj = (A[i][j]);
            if (abs_xj < min_xj)
            {
                min_xj = abs_xj;
            }
        }
        X[j] = min_xj;
    }

    double sum_last_column = 0;
    for (int i = 0; i < n; i++)
    {
        sum_last_column += A[i][n - 1];
    }

    X[n - 1] = sum_last_column;

    printf("\nVector X:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f\t", X[i]);
    }

    double max_min_ratio_result = g(A, n);
    printf("\n\nMax{(min{|xj|})/(|xi+0.5|)} = %.2f\n", max_min_ratio_result);

    for (int i = 0; i < n; i++)
    {
        free(A[i]);
    }
    free(A);
    free(X);

    return 0;
}
