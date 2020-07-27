#include<stdio.h>

/* 使用数组下标实现的方式 */
void my_strcpy(char *s, char *t)
{
    int i;

    i = 0;
    while ( ( s[i] = t[i] ) != '\0' ) {
        i++;
    }
}

/* 使用指针方式实现的版本 */
void my_strcpy1(char *s, char *t) 
{
    while ( (*s = *t) != '\0') {
        s++;
        t++;
    }
}

/* 经验丰富的程序写法 */
void my_strcpy2(char *s, char *t)
{
    while( (*s++ = *t++) != '\0' )
        ;
}

/* 经验丰富的程序写法3 */
void my_strcpy3(char *s, char *t)
{
    while( (*s++ = *t++) )
        ;
}

int main()
{
    char *t = "now is the time";
    char s[100];
    // my_strcpy1(s, t);
    my_strcpy3(s, t);

    printf("%s\n", s);

    return 0;
}
