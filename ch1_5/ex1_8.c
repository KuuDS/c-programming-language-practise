#include <stdio.h>
#define BLANK ' '
#define TAB '\t'
#define NEWLINE '\n'

main()
{
    int c, nblank, ntab, nl;

    nblank = 0;
    ntab = 0;
    nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == BLANK)
            ++nblank;
        else if (c == TAB)
            ++ntab;
        else if (c == NEWLINE)
            ++nl;
    }

    printf("STAT: blank %d, tab %d, newline %d.", nblank, ntab, nl);
}