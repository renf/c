#include <stdio.h>
/***********************************************
#
#      Filename: count_line.c
#
#        Author: renfeng1 - renfeng1@leju.com
#   Description: 行统计
#        Create: 2018-09-30 09:49:39
# Last Modified: 2018-09-30 09:49:39
***********************************************/

int main()
{
    int c, nl;
    nl = 0;
    while ( (c = getchar()) != EOF)
        if (c == '\n')
            ++nl;

    printf("%d\n", nl);
}
