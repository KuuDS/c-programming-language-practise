#include <stdio.h>

#define TAB '\t'
#define BS '\b'
#define BSL '\\'

main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == TAB)
            printf("\\t");
        else if (c == BS)
            printf("\\b");
        else if (c == BSL)
            printf("\\\\");
        else
            putchar(c);
    }
}