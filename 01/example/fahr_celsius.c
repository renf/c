#include <stdio.h>

/*
 
   使用公式c(摄氏度) = (5/9) (F-32) 打印出下列华氏温度
   与摄氏温度对照表：

   0 -17
   20 -6
   40 4
   60 15
   80 26
   100 37
   120 48
   140 60
   160 71
   180 82
   200 93
   220 104
   240 115
   ...
   300 148

 */

int main()
{

    int celsius, fahr;
    int lower, upper, step;

    lower = 0;    // 最低温度
    upper = 300;  // 最高温度
    step  = 20;   // 步长

    fahr = lower;
    while (fahr <= upper) {
    
        celsius = 5 * (fahr - 32) / 9;
        /**
        输出不是右对齐的
        printf("%d\t%d\n", fahr, celsius);
        */
        printf("%4d\t%8d\n", fahr, celsius);
        fahr += step;
    }

}
