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

void printMap(const map<int, int>&m) {
	for (auto it = m.begin(); it != m.end(); ++it)
		cout << "key = " << it->x << ", value = " << it->y << endl;
	cout << endl;
}

// 构造和赋值
void test10_01() {
	map<int, int> m; // 默认构造
	rep(i, 1, 3) m.insert({ i, i * 10 });
	printMap(m);

	map<int, int> m2(m); printMap(m2); // 拷贝构造

	map<int, int> m3;
	m3 = m2; printMap(m3); // 赋值
}

// 大小和交换
void test10_02() {
	map<int, int> m{ { 1, 10 }, { 2, 20 }, { 3, 30 } };
	printMap(m);

	cout << "m是否为空: " << m.empty() << endl; // false
	cout << "m的大小是: " << m.size() << endl; // 3

	map<int, int> m2{ {4, 40} };
	cout << "交换前:" << endl;
	printMap(m2);
	cout << "交换后:" << endl;
	m.swap(m2);
	printMap(m); printMap(m2);
}

// 插入和删除
void test10_03() {
	map<int, int> m{ { 1, 10 }, { 2, 20 }, { 3, 30 } };
	m.insert({ -10, -100 });
	printMap(m);

	m.erase(2); printMap(m);
	m.erase(m.begin()); printMap(m);
	m.erase(m.begin(), m.end()); m.clear(); printMap(m);
}

// 查找和统计
void test10_04() {
	map<int, int> m{ { 1, 10 }, { 2, 20 }, { 3, 30 } };

	auto pos = m.find(2); // map<int, int>::iterator
	if (pos == m.end()) cout << "未找到元素 2" << endl;
	else cout << "找到了元素 2, value = " << pos->y << endl;

	cout << "元素2的个数为: " << m.count(2) << endl;
}

// 排序
class CompareMap {
public:
	bool operator()(int a, int b) const {
		return a > b;
	}
};
void test10_05() {
	map<int, int, CompareMap> m{ { 1, 10 }, { 2, 20 }, { 3, 30 } };
	for (auto it = m.begin(); it != m.end(); ++it)
		cout << "key = " << it->x << ", value = " << it->y << endl;
	cout << endl;
}

int main010(int argc, char* argv[]) {
	//test10_01();
	//test10_02();
	//test10_03();
	//test10_04();
	test10_05();
	// system("pause");
	return EXIT_SUCCESS;
}
