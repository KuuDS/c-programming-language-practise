#include <stdio.h>

main()
{
    int c, lc;
    lc = 0;
    while ((c = getchar()) != EOF)
        if ((c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z'))
        {
            lc = 0;
            putchar(c);
        }
        else
        {
            // printf("%d\n", lc);
            if ((++lc) == 1)
            {
                putchar('\n');
            }
        }
}