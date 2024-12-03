#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
#define x first
#define y second
#define null NULL
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
#define debug(n, m) cout << #n << " = " << (m) << endl
#define cout(n) cout << n << endl
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

/*
    1. 语法格式: 数据类型& 别名 = 原名; // 本质就是给变量其别名
*/

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

//返回静态变量引用
int& test02() {
    static int a = 20;
    return a;
}

int main010(int argc, char* argv[])
{
    int a = 10, b = 20;
    printf("a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("a = %d, b = %d\n", a, b);

    // int &c; // 错误, 引用必须初始化
    int& c = a; // 一旦初始化后, 就不可以更改
    c = b; // 这是赋值操作, 不是更改引用

    int& res2 = test02();
    cout << "res2 = " << res2 << endl; // 
    cout << "res2 = " << res2 << endl;

    test02() = 1000; // 函数做左值，那么必须返回引用

    cout << "res2 = " << res2 << endl;
    cout << "res2 = " << res2 << endl;

    system("pause");
    return EXIT_SUCCESS;
}
