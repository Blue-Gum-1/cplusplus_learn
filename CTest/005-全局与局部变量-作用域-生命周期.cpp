#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
#define x first
#define y second
#define null NULL
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

/*
    1. 局部变量
        - 概念: 定义在函数内部的变量
        - 作用域: 从定义位置开始, 到包裹该变量的第一个右大括号结束
    2. 全局变量
        - 概念: 定义在函数外部的变量
        - 作用域: 从定义位置开始, 默认在本文件内部. 其它文件想要使用, 可以通过声明方式将作用域导出(extern)
    3. static全局变量
        - 定义: 在全局变量前添加 static 关键字, 如static int a = 10;
        - 作用域: 被限制在本文件内部, 不允许通过声明方式导出到其他文件
    4. static局部变量
        - 定义: 在局部变量前添加 static 关键字
        - 特性: 只定义一次, 定义在全局位置
        - 作用域: 从定义位置开始, 默认在本文件内部
    5. static函数
        - 定义: static + 函数原型 + 函数体
        - 作用域: 被限制在本文件内部, 不允许通过声明方式导出到其他文件
    6. 生命周期
        - 局部变量: 从变量定义开始, 到函数调用完成                   --- 函数内部
        - 全局变量: 程序启动开始(早于main函数), 到程序终止结束        --- 程序执行期间
        - static 局部变量: 程序启动开始(早于main函数), 到程序终止结束 --- 程序执行期间
        - static 全局变量: 程序启动开始(早于main函数), 到程序终止结束 --- 程序执行期间
        - 全局函数: 程序启动开始(早于main函数), 到程序终止结束        --- 程序执行期间
        - static 全局函数: 程序启动开始(早于main函数), 到程序终止结束 --- 程序执行期间
*/

int main005()
{

    vector<int> v;
    list<int> l;
    map<int, int> m;
    int arr[] = { 1, 2, 3, 4 };
    queue<int> q;
    stack<int> s;
    set<int> set_s;


    system("pause");
    return EXIT_SUCCESS;
}
