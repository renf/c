#include <stdio.h>

int my_strlen(char *s)
{

    int n;
    for (n = 0; *s != '\0'; s++)
        n++;
    return n;
}

/**
 * 在函数定义中，形式参数 
 *  char s[]
 *  与
 *  char *s 是等价的。但是通常习惯于后一种，因为
 *  更加直观的表明了该参数是一个指针。
 *
 *  也可将指向子数组起始位置的指针传递给函数，这样，
 *  就将数组的一部分传递给了函数.例如，如果a是一个
 *  数组，那么下面两个调用
 *  f( &a[2] )
 *  与
 *  f( a + 2 )
 *  都将把起始于a[2]的子数组的地址传递给函数f。在函数f中，
 *  参数的声明形式可以为
 *  f(int arr[]) {...}
 *  或
 *  f(int *arr) {...}
 *
 *
 */

int main()
{
    int n, m;
    char ch[100]={'H', 'E', 'L', 'L'};
    n = my_strlen("Hello World");
    printf("%d\n", n);
    m = my_strlen(ch);
    printf("%d\n", m);
}
