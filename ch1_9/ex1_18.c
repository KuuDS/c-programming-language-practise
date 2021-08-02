#include <stdio.h>
#include <stdbool.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
bool is_empty(char line[]);

int main()
{
    int len;
    char line[MAXLINE];
    while ((len = get_line(line, MAXLINE)) > 0)
    {
        if (!is_empty(line))
            printf("%s", line);
    }
}

int get_line(char line[], int maxline)
{
    int i, c;
    i = 0;
    for (i = 0; i < maxline - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
        line[i] = c;
    if (c == '\n')
    {
        while (i > 0 && ((c = line[i - 1]) == ' ' || c == '\t'))
            i--;
        line[i] = '\n';
        i++;
    }
    line[i] = '\0';
    return i;
}

bool is_empty(char line[])
{
    return line[0] == '\n';
}