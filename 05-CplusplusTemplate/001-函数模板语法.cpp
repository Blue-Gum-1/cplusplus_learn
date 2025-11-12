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

// 函数模板
template<typename T, typename V> // 声明一个模板, 告诉编译器后面代码中紧跟着的 T 不要报错, T 是一个通用数据类型
void mySwap(T & a, V & b) {
	T temp = a;
	a = b;
	b = temp;
}

int main001(int argc, char* argv[]) {
	int a = 10, b = 20;
	// 利用函数模板交换值

	// 方式1: 自动类型推导
	//mySwap(a, b);

	// 方式2: 显示指定类型
	mySwap<int, int>(a, b);
	printf("a = %d, b = %d\n", a, b);
	// system("pause");
	return EXIT_SUCCESS;
}