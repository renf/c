#include <stdio.h>

/* 
 * 于之前写的是整型的
 * 0 的时候 应该是17.8  
 * 所以这个列子将改写
 */
int main()
{

    float celsuis, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step  = 20;

    fahr = lower;

    while (fahr <= upper) {
        
        celsuis = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsuis);
        fahr += step;
    }

}
