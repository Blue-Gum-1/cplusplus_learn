#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
#define x first
#define y second
#define null NULL
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
#define repit(it, m) for (auto it = (m.begin()); it != (m.end()); ++it)
#define debug(n, m) cout << #n << " = " << (m) << endl
#define cout(n) cout << n << endl
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

/*

*/

// find
class MyClass {
public:
	MyClass(string name, int age) { m_Name = name; m_Age = age; }
	bool operator==(const MyClass& cls) { return m_Name == cls.m_Name && m_Age == cls.m_Age; }
	string m_Name;
	int m_Age;
};
void test19_01() {
	vector<MyClass> v;
	v.push_back(MyClass("jerry", 20));
	v.push_back(MyClass("tom", 18));
	auto pos = find(v.begin(), v.end(), MyClass("tom", 18));
	if (pos == v.end()) cout << "未找到! !" << endl;
	else cout << "找到了! name = " << pos->m_Name << ", age = " << pos->m_Age << endl;
}

// find_if
struct GreaterFive {
	bool operator()(int val) const {
		return val > 5;
	}
};
void test19_02() {
	vector<int> v{ 1, 4, 7, 9, 5, 3 };
	auto pos = find_if(v.begin(), v.end(), GreaterFive());
	if (pos == v.end()) cout << "未找到! ! !" << endl;
	else cout << "找到了! 值为 " << *pos << endl; // 7
}

// adjacent_find
void test19_03() {
	vector<int> v{ 1, 2, 3, 4, 4, 2, 5, 2 };
	auto pos = adjacent_find(v.begin(), v.end());
	if (pos == v.end()) cout << "未找到! ! !" << endl;
	else cout << "找到了! 值为 " << *pos << endl; // 4
}

// binary_search
void test19_04() {
	vector<int> v{ 1, 2, 2, 3, 4, 6 };
	auto pos = binary_search(v.begin(), v.end(), 4);
	if (!pos) cout << "未找到! ! !" << endl;
	else cout << "找到了!" << endl;
}

// count
void test19_05() {
	vector<int> v{ 1, 1, 2, 3, 1, 4, 1, 5 };
	auto num = count(v.begin(), v.end(), 1);
	cout << "1 在容器中的数量为 " << num << endl; // 4
}

// count_if
void test19_06() {
	vector<int> v{ 1, 2, 6, 8, 9, 2, 3 };
	auto num = count_if(v.begin(), v.end(), GreaterFive());
	cout << "大于 5 的内容数量为 " << num << endl; // 3
}

int main019(int argc, char* argv[]) {
	//test19_01();
	//test19_02();
	//test19_03();
	//test19_04();
	//test19_05();
	test19_06();
	// system("pause");
	return EXIT_SUCCESS;
}
