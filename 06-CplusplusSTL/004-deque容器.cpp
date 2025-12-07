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

void printDeque(const deque<int>& d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); ++it)
		cout << *it << " ";
	cout << endl;
}

// 构造函数
void test04_01() {
	deque<int> d1; // 无参构造
	rep(i, 1, 10) d1.push_back(i);
	printDeque(d1);
	deque<int> d2(d1.begin(), d1.end());
	printDeque(d2);
	deque<int> d3(10, 100);
	printDeque(d3);
	deque<int> d4 = d3;
	printDeque(d4);
}

// 赋值操作
void test04_02() {
	deque<int> d1;
	rep(i, 1, 10) d1.push_back(i);
	printDeque(d1);

	deque<int> d2;
	d2 = d1; printDeque(d2);
	deque<int> d3;
	d3.assign(d1.begin(), d1.end()); printDeque(d3);
	deque<int> d4;
	d4.assign(10, 100); printDeque(d4);
}

// 大小操作: size
void test04_03() {
	deque<int> d1;
	rep(i, 1, 10) d1.push_back(i);
	printDeque(d1);

	cout << d1.empty() << endl; // false
	cout << d1.size() << endl; // 10

	d1.resize(15, 1); printDeque(d1);
	d1.resize(5); printDeque(d1);
}

// 两端插入和删除
void test04_04() {
	deque<int> d;
	d.push_back(10); d.push_back(100); // 尾插
	d.push_front(20); d.push_front(200); // 头插
	printDeque(d);

	d.pop_back(); // 尾删
	d.pop_front(); // 头删
	printDeque(d);
}

// 指定位置插入 和 删除
void test04_04_02() {
	deque<int> d1, d2;
	rep(i, 1, 5) d1.push_back(i), d2.push_back(1000);
	printDeque(d1);

	d1.insert(d1.begin() + 2, 10);
	printDeque(d1);
	d1.insert(d1.begin(), 2, 100);
	printDeque(d1);

	d1.insert(d1.begin(), d2.begin(), d2.end());
	printDeque(d1);

	d1.erase(d1.begin());
	printDeque(d1);

	d1.erase(d1.begin(), d1.end());
	d1.clear();
	printDeque(d1);
}

// 数据存取
void test04_05() {
	deque<int> d;
	rep(i, 1, 10) d.push_back(i);
	printDeque(d);

	cout << "d[2] = " << d[2] << endl; // 3
	cout << "d.at(2) = " << d.at(2) << endl; // 3
	d.at(2) = 100;
	cout << "修改后 d.at(2) = " << d.at(2) << endl; // 100
	cout << "d.front() = " << d.front() << endl; // 1
	cout << "d.back() = " << d.back() << endl; // 10
}

// 排序
void test04_06() {
	deque<int> d;
	rep(i, 1, 10) d.push_back(10 - i);
	printDeque(d);

	sort(d.begin(), d.end());
	printDeque(d);

	sort(d.begin(), d.end(), greater<int>());
	printDeque(d);
}

int main004(int argc, char* argv[]) {
	//test04_01();
	//test04_02();
	//test04_03();
	//test04_04();
	//test04_04_02();
	//test04_05();
	test04_06();
	// system("pause");
	return EXIT_SUCCESS;
}
