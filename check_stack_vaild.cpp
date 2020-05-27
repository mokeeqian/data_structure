/*
王道P71 第三题代码实现
检查栈的操作序列是否合法
要求：
    入栈前出栈后栈都是空的
*/

#include <stdio.h>

/**
 * options存放操作序列
 */
bool isVaild( char *options ) {
    int in_counter = 0;     // I 操作符的个数
    char op;
    // 扫描序列，检测出栈操作合法性
    while ( op = *(options++) ) {
        if ( op == 'I' ) {
            in_counter ++;
        } else {
            in_counter --;
            if ( in_counter < 0 ) {
                return false;
            }
        }
    }

    // 检测入栈出栈是否守恒
    if ( in_counter != 0 ) {    // 有剩余的元素未出栈
        return false;
    }
    return true;   
}

int main(int argc, char const *argv[])
{
    char *options = "IIIOIOIO";
    if ( isVaild(options) ) {
        printf("合法\n");
    } else {
        printf("非法操作\n");
    }
    return 0;
}
