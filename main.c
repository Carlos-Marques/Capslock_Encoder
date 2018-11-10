#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    char *m = argv[1];
    char *str = argv[2];

    for (int c = 0; c < strlen(str); c++)
    {
        if (m[c] == '1')
        {
            int a = str[c];
            printf("%c", toupper(a));
        }
        else
        {
            printf("%c", str[c]);
        }
    }

    printf("\n");

    return 0;
}