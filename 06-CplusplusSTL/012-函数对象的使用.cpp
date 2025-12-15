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

// 1. 函数对象在使用时, 可以像普通函数那样调用, 可以有参数, 可以有返回值
class MyAdd {
public:
	int operator()(int a, int b) {
		return a + b;
	}
};
void test12_01() {
	MyAdd myAdd;
	cout << myAdd(10, 20) << endl;
}

// 2. 函数对象可以有自己的状态
class MyPrint {
public:
	MyPrint() { count = 0; }
	void operator()(string s) {
		cout << s << endl;
		++count;
	}
	int count;
};
void test12_02() {
	MyPrint myPrint;
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	cout << "MyPrint调用的次数为: " << myPrint.count << endl; // 3
}

// 3. 函数对象可以作为参数传递
void doPrint(MyPrint& p, string str) { p(str); }
void test12_03() {
	MyPrint myPrint;
	doPrint(myPrint, "调用doPrint");
}

int main012(int argc, char* argv[]) {
	//test12_01();
	//test12_02();
	test12_03();
	// system("pause");
	return EXIT_SUCCESS;
}
