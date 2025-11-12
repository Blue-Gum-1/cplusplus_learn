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

*/

void myPrint(int a, int b) {
    cout << "调用普通函数" << endl;
}

template<class T>
void myPrint(T a, T b) {
    cout << "调用函数模板" << endl;
}

template<class T>
void myPrint(T a, T b, T c) { // 函数模板重载
    cout << "调用重载函数模板" << endl;
}

int main005(int argc, char* argv[]) {
    int a = 10, b = 20;
    myPrint(a, b); // 函数模板和普通函数都可以实现, 优先调用普通函数
    myPrint<>(a, b); // 通过空模板参数列表, 强制调用函数模板
    myPrint(a, b, a); // 调用重载的函数模板
    char c = 'a', d = 'b';
    myPrint(c, d); // 调用函数模板: 调用普通函数时还需要进行类型转换, 当调用函数模板时直接将T推导为char类型
    return EXIT_SUCCESS;
}
