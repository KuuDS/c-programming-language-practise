#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void reverse(char line[], int size);

int main()
{
    int len;
    char buf[MAXLINE];
    // get_line
    while ((len = get_line(buf, MAXLINE)) > 0)
    {
        // do reverse
        printf("o:\t-%s", buf);
        reverse(buf, len);
        // print
        printf("c:\t-%s", buf);
    }
    return 0;
}

int get_line(char line[], int maxline)
{
    int i, c;
    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    if (c == '\n')
    {
        line[i] = c;
        i++;
    }

    line[i] = '\0';
    return i;
}

void reverse(char line[], int size)
{
    if (size <= 0)
        return;

    size--;
    if (line[size] == '\n')
        size--;

    int i, j, tmp;
    for (i = 0, j = size; i < j; ++i, --j)
    {
        tmp = line[i];
        line[i] = line[j];
        line[j] = tmp;
    }
}
