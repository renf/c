#include <stdio.h>

/**
 * 定义符号常量
 * #define name text
 * 1. 名字通常为大写
 * 2. 指令末尾没有分号
 */
#define LOWER 0    // 温度表下限
#define UPPER 300  // 温度表上限制
#define STEP  20   // 步长

int main()
{

    float celsuis, fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP) 
        printf("%3.0f %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}
