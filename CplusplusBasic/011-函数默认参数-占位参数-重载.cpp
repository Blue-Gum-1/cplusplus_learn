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
	1. ����Ĭ�ϲ���
*/

// int func(int a = 10, int b = 20, int) { return a + b + c; } // ����ʱ�ͱ���
int func(int a = 10, int b = 20, int c = 30) { return a + b + c; }

int func2(int a, int b = 20);
// int func2(int a = 10, int b = 30) { return a + b; } // ����ʱ�ᱨ��
int func2(int a, int b) { return a + b; }

// ����ռλ����, ռλ����Ҳ������Ĭ�ϲ���
void func3(int a, int = 10) { cout("this is func3"); }

// ������Ϊ��������
void func4(int& a) { cout << "func (int &a) ���� " << endl; }
void func4(const int& a) { cout << "func (const int &a) ���� " << endl; }

// ����������������Ĭ�ϲ���
void func5(int a, int b = 10) { cout("func2(int a, int b = 10) ����"); }
void func5(int a) { cout("func2(int a) ����"); }

int main011(int argc, char* argv[])
{
	cout(func());
	cout(func2(10));
	func3(10, 20);

	int a = 10;
	func4(a); // ������const
	func4(10); // ������const

	 // func5(10);

	system("pause");
	return EXIT_SUCCESS;
}
