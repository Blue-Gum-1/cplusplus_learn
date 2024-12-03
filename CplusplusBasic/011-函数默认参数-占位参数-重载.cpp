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
	1. 函数默认参数
*/

// int func(int a = 10, int b = 20, int) { return a + b + c; } // 编译时就报错
int func(int a = 10, int b = 20, int c = 30) { return a + b + c; }

int func2(int a, int b = 20);
// int func2(int a = 10, int b = 30) { return a + b; } // 运行时会报错
int func2(int a, int b) { return a + b; }

// 函数占位参数, 占位参数也可以有默认参数
void func3(int a, int = 10) { cout("this is func3"); }

// 引用作为重载条件
void func4(int& a) { cout << "func (int &a) 调用 " << endl; }
void func4(const int& a) { cout << "func (const int &a) 调用 " << endl; }

// 函数重载碰到函数默认参数
void func5(int a, int b = 10) { cout("func2(int a, int b = 10) 调用"); }
void func5(int a) { cout("func2(int a) 调用"); }

int main011(int argc, char* argv[])
{
	cout(func());
	cout(func2(10));
	func3(10, 20);

	int a = 10;
	func4(a); // 调用无const
	func4(10); // 调用有const

	 // func5(10);

	system("pause");
	return EXIT_SUCCESS;
}
