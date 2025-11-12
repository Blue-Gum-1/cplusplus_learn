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
    函数模板注意事项
        1. 自动类型推导时, 必须推导出一致的数据类型 T 才可以使用
        2. 模板必须要确定出 T 的数据类型, 才可以使用
*/

template<class T> // typename 可以替换为class
void mySwap(T & a, T & b) {
    T temp = a;
    a = b;
    b = temp;
}

template<class T>
void func() {
    cout << "调用func函数" << endl;
}

void test002_01() {
    int a = 10, b = 20;
    char c = 'a';
    mySwap(a, b); // 正确
    cout << "a = " << a << ", b = " << b << endl;

    // mySwap(a, c); /// 错误: 推导数据类型不一致
}

void test002_02() {
    // func(); // 错误: T的数据类型无法确认
    func<int>(); // 正确
}

int main002(int argc, char* argv[]) {
    test002_01();
    test002_02();

    // system("pause");
    return EXIT_SUCCESS;
}
