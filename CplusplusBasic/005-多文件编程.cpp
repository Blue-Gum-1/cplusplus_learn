#include "test.h"
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

int add_num(int a, int b); // 函数定义在 'add.cpp' 文件中

/*
    1. 多文件编程: 将多个含有不同函数功能的 '.cpp' 文件模板, 编译到一起, 生成一个 '.exe' 文件
        main函数所在文件调用 '.cpp'文件模板 中的函数
            方式1: 如add_num, 声明在main函数所在文件, 函数体在'add.cpp'文件中
            方式2: 如del_num, 声明在'test.h'头文件中, main函数所在文件#include "test.h", 函数体在'add.cpp'文件中
    2. 头文件: 1) 系统库头文件, 如stdio.h, 引用时使用 '<>' 2) 自定义头文件, 如test.h, 引用时使用 '""'(双引号)
        (1) 防止头文件重复包含(头文件守卫)
            方式1: 第一行写 #pragma once // windows中
            方式2(如test.h): #ifndef XXX_H
                             #define XXX_H
                                ... // 头文件内容
                             #endif
        (2) 头文件内容: 1) include头文件; 2) 函数声明; 3) 类型定义; 4) 宏定义;

*/
int main005()
{
    int a = 1, b = 2;
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", add_num(a, b));
    printf("a - b = %d\n", del_num(a, b));
    system("pause");
    return EXIT_SUCCESS;
}
