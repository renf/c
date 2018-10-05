#include <stdio.h>
/***********************************************
#
#      Filename: count_word.c
#
#        Author: renfeng1 - renfeng1@leju.com
#   Description: 字符计数
#        Create: 2018-09-30 09:46:51
# Last Modified: 2018-09-30 09:46:51
***********************************************/

int main()
{

    long nc;

    nc = 0;

    while (getchar() != EOF) {
        ++nc;
    }
    printf("%ld\n", nc);
}
