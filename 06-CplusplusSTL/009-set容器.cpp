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

void printSet(const set<int>&s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
}

// 构造和赋值
void test09_01() {
	set<int> s1;
	rep(i, 1, 4) s1.insert(4 - i);
	printSet(s1);

	set<int> s2(s1); printSet(s2);
	set<int> s3; s3 = s2; printSet(s3);
}

// 大小和交换
void test09_02() {
	set<int> s1, s2;
	rep(i, 1, 5) s1.insert(i), s2.insert(i * 10);
	cout << "s1是否为空: " << s1.empty() << endl; // false
	cout << "s1的大小为: " << s1.size() << endl; // 5

	cout << "交换前:" << endl;
	printSet(s1); printSet(s2);

	s1.swap(s2);
	cout << "交换后:" << endl;
	printSet(s1); printSet(s2);
}

// 插入和删除
void test09_03() {
	set<int> s;
	rep(i, 1, 5) s.insert(rand()), s.insert(100);
	printSet(s);

	s.erase(s.begin()); printSet(s);
	s.erase(100); printSet(s);

	s.erase(s.begin(), s.end());
	s.clear();
	printSet(s);
}

// 查找和统计
void test09_04() {
	set<int> s{ 1, 1, 2, 3, 4, 5 };
	set<int>::iterator it = s.find(2);
	cout << "查找元素2: " << (it != s.end() ? "找到了元素" : "未找到元素") << endl;

	cout << "元素1的个数: " << s.count(1) << endl; // 1
}

// set与multiset的区别
void test09_05() {
	set<int> s;
	pair<set<int>::iterator, bool> res = s.insert(10);
	cout << "第一次插入" << (res.y ? "成功!" : "失败!") << endl;
	res = s.insert(10);
	cout << "第二次插入" << (res.y ? "成功!" : "失败!") << endl;

	multiset<int> ms{ 10, 10, 10 };
	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); ++it)
		cout << *it << " ";
	cout << endl;
}

// 创建pair
void test09_06() {
	pair<string, int> p1("tom", 23);
	pair<string, int> p2 = make_pair("jerry", 28);
	cout << "姓名: " << p1.first << ", 年龄: " << p1.second << endl;
	cout << "姓名: " << p2.first << ", 年龄: " << p2.second << endl;
}

// set容器排序 - 仿函数
class MyCompare {
public:
	bool operator()(int a, int b) const {
		return a > b;
	}
};
void test09_07() {
	set<int> s1{ 10, 30, 60, 20, 50, 40 }; printSet(s1);

	set<int, MyCompare> s2;
	for (auto it = s1.begin(); it != s1.end(); ++it) s2.insert(*it);
	for (auto it = s2.begin(); it != s2.end(); ++it) cout << *it << " ";
	cout << endl;
}

int main(int argc, char* argv[]) {
	//test09_01();
	//test09_02();
	//test09_03();
	//test09_04();
	//test09_05();
	//test09_06();
	test09_07();
	// system("pause");
	return EXIT_SUCCESS;
}
