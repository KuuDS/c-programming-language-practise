#include <stdio.h>

#define BLANK ' '

main()
{
    int c, flag;
    flag = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == BLANK)
        {
            if ((flag++) > 0)
                continue;
        }
        else
            flag = 0;

        putchar(c);
    }
}