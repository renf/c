#include <stdio.h>
/***********************************************
#
#      Filename: word_total.c
#
#        Author: renfeng1 - renfeng1@leju.com
#   Description: 单词统计
#        Create: 2018-09-30 09:52:35
# Last Modified: 2018-09-30 09:52:35
***********************************************/

#define IN 1   // 在单词内
#define OUT 0  // 在单词外

int main()
{

    int c, nl, nw, nc, state;

    nl = nw = nc = 0;
    while ( (c = getchar()) != EOF ) {
    
        ++nc;
        if (c == '\n') {
            ++nl;
        } 
        if (c == ' ' || c == '\n' || c == '\t') {
        
            state = OUT;
        } else if (state == OUT) {
        
            state = IN;
            ++nw;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);

}
