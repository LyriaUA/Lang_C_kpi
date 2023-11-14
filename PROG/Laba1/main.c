#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double a, b, x, y, s;

    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);
    printf("Enter s: ");
    scanf("%lf", &s);


    if (log(y) == 0) //Виконання першого рівняння
    {
        printf("Error a\n");
    }
    else
    {
        if(y > 0)
        {

            if(x + exp(0.5 * log(y)) > 0)
            {
                a = exp((-x) * log(2)) * exp(0.5 * log(x + exp(0.5 * log(y))));
                printf("A %lf: \n",a);
            }
            else
            {
                printf("Error \n");
            }
        }
        else
        {
            printf("Error a\n");
        }
    }

    if (sin(s) == 0) //Виконання другого рівняння
    {
        printf("Error b");
    }
    else
    {
        if(exp(x*(1/sin(s)))-1 > 0)
        {
            b = exp(0.25 * log(exp(x*(1/sin(s)))-1));
            printf("B %lf: \n",b);
        }
        else
        {
            printf("Error b\n");
        }
    }

    return 0;
}
