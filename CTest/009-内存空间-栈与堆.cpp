#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
#define x first
#define y second
#define null NULL
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
#define debug(n, m) cout << #n << " = " << (m) << endl;
#define cout(n) cout << (n) << endl;
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

/*
    1. 内存4区模型
        1) 代码段: .text段. 存放程序的源代码(二进制形式)
        2) 数据段: .rodata段(只读数据段), .data段(初始胡数据段), .bss段(未初始化数据段)
            a) .data段(初始胡数据段): 初始化为非0的 全局变量和静态变量
            b) .bss段(未初始化数据段): 初始化为0 和 未初始化的 全局变量和静态变量; 程序加载执行前, 会将该段整体赋值为0
            c) .rodata段(只读数据段): 存放常量
        3) stack: 栈. 在其之上开辟栈帧.      windows: 1M, 可提升至 10M; Linux: 8M, 可提升至16M
            空间比较小, 系统自动管理、自动分配、自动释放. 存储特性是: FILO(先进先出)
        4) heap: 堆. 给用户自定义数据提供空间. 空间大小约为 1.3G+
            空间足够大


    2. 栈帧
        - 当函数被调用时, 系统会在 stack 空间上申请一块内存区域, 用来供函数调用, 主要存放 形参 和 局部变量(定义在函数内部 ).
        - 当函数调用结束, 这块内存区域自动被释放(消失)
    3. 返回值: 数组不能作为返回值 ! ! ! , 只能写成指针的形式

    4. 堆空间的申请和使用
        1) void *malloc(size_t size);  申请size大小的空间
           a) 返回实际申请到的内存空间首地址. 我们通常拿来当数组用! ! !
        2) void free(void *ptr);  释放申请的空间
        3) 注意:
            a) 申请的heap(堆)空间是连续的, 可以当做数组使用
            b) free后的空间, 不会立即失效, 通常将free后的地址置为NULL
            c) free的地址必须是malloc申请的地址, 否则会出错
            d) 如果malloc之后的地址一定会变化, 可以使用临时变量tmp保存
    5. 二级指针申请堆空间
        1) 申请空间: int **s = (int**) malloc(sizeof(int *) * 3); rep(i, 0, 2) *(s + i) = (int *)malloc(sizeof(int) * 5);
        2) 释放空间: rep(i, 0, 2) free(s[i]), s[i] = null; free(s), s = null;
        3) 注意: 申请空间时, 先申请外层空间, 在申请内层空间; 释放空间时, 需要先释放内层的空间, 再释放外层的空间.
*/

int main009(int argc, char* argv[])
{
    int* p = (int*)malloc(sizeof(int) * 10); // 申请10个int大小的空间

    if (p == null) {
        cout("malloc error");
        return -1;
    }

    rep(i, 0, 9) p[i] = i + 10;
    rep(i, 0, 9) cout << "p[" << i << "] = " << *(p + i) << endl;

    free(p), p = null;

    int** s = (int**)malloc(sizeof(int*) * 3);
    rep(i, 0, 2) {
        *(s + i) = (int*)malloc(sizeof(int) * 5);
        rep(j, 0, 4) s[i][j] = i * 5 + j;
    }

    rep(i, 0, 2) rep(j, 0, 4) {
        cout << (*(*(s + i) + j)) << "\t";
        if (j == 4) cout << endl;
    }

    rep(i, 0, 2) free(s[i]), s[i] = null;
    free(s), s = null;

    system("pause");
    return EXIT_SUCCESS;
}
