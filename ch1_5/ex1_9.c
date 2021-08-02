#include <stdio.h>

#define BLANK ' '

main()
{
    int c, flag;
    flag = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != BLANK)
            flag = 0;

        if ((flag++) > 0)
            continue;

        putchar(c);
    }
}