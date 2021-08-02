#include <stdio.h>

int celsius(int fahr);

main()
{
    int celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    for (int fahr = lower; fahr <= upper; fahr += step)
    {
        celsius = celsius(fahr);
        printf("%d\t%d\n", fahr, celsius);
    }
    return 0;
}

int celsius(int fahr)
{
    return 5 * (fahr - 32) / 9;
}