#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 130;
    step = 10;
    for (fahr = lower; fahr <= upper; fahr += step)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3.0f\t%1.0f\n", fahr, celsius);
    }
    return EXIT_SUCCESS;
}