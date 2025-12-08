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

void printList(const list<int>&l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
}

// 构造函数
void test08_01() {
	list<int> l1;
	rep(i, 1, 4) l1.push_back(i);
	printList(l1);

	list<int> l2(l1.begin(), l1.end()); printList(l2);

	list<int> l3(l2); printList(l3);

	list<int> l4(10, 100); printList(l4);
}

// 赋值
void test08_02() {
	list<int> l1;
	rep(i, 1, 4) l1.push_back(i); printList(l1);

	list<int> l2;
	l2.assign(l1.begin(), l1.end()); printList(l2);

	list<int> l3;
	l3.assign(10, 100); printList(l3);

	list<int> l4; 
	l4 = l3; printList(l4);
}

// 交换
void test08_02_02() {
	list<int> l1{ 1, 2, 3, 4 }, l2(10, 100);

	cout << "交换前: " << endl;
	printList(l1), printList(l2);

	l1.swap(l2);
	cout << "交换后:" << endl;
	printList(l1), printList(l2);
}

// 大小操作
void test08_03() {
	list<int> l{ 1, 2, 3, 4, 5 };
	printList(l);
	cout << "list是否为空: " << l.empty() << endl; // false
	cout << "list的大小为: " << l.size() << endl; // 5
	
	l.resize(10, 100); printList(l);
	l.resize(3); printList(l);
}

// 插入和删除
void test08_04() {
	list<int> l;
	rep(i, 1, 3) l.push_back(i), l.push_front(i); // 头插尾插
	printList(l); // 3 2 1 1 2 3

	l.pop_back(), l.pop_front(); // 头删尾删
	printList(l); // 2 1 1 2

	l.insert(l.begin(), 3), l.insert(l.begin(), 2, 100); // 插入
	printList(l); // 100 100 3 2 1 1 2

	l.remove(100); // 删除
	printList(l); // 3 2 1 1 2

	l.erase(l.begin()); // 删除
	printList(l); // 2 1 1 2

	l.erase(l.begin(), l.end());
	l.clear();
	printList(l); // null
}

// 数据获取
void test08_05() {
	list<int> l{ 1, 2, 3, 4, 5 };

	// cout << l.at(0) << endl; // 报错, list不支持at访问数据
	// cout << l[0] << endl; // 报错, list不支持[]访问数据
	cout << "list第一个元素为: " << l.front() << endl; // 1
	cout << "list最后一个元素为: " << l.back() << endl; // 5

	// list容器的迭代器是双向迭代器，不支持随机访问
	list<int>::iterator it = l.begin();
	// it = it + 1; // 报错, 不可以跳跃访问, 即使是+1
	cout << "list第二个元素为: " << *(++it) << endl; // 2
}
bool cmp(int v1, int v2) { return v1 > v2; }
// 反转和排序
void test08_06() {
	list<int> l{ 1, 2, 3, 4, 5 };
	printList(l);
	
	l.reverse();
	cout << "list反转后:" << endl;
	printList(l);

	l.sort(); // 默认从小到大排序
	printList(l);

	l.sort(cmp); // 自定义排序: 从大到小
	printList(l);
}

class Person {
public:
	Person(string name, int age, int height) {
		m_Name = name;
		m_Age = age;
		m_Height = height;
	}
	string m_Name;
	int m_Age;
	int m_Height;
};
bool cmpPerson(const Person& p1, const Person& p2) {
	return p1.m_Age == p2.m_Age ? p1.m_Height < p2.m_Height : p1.m_Age > p2.m_Age;
}

void test08_07() {
	Person p1("刘备", 35, 175), p2("曹操", 45, 180), p3("孙权", 40, 170);
	Person p4("赵云", 25, 190), p5("张飞", 35, 160), p6("关羽", 35, 200);

	list<Person> l{ p1, p2, p3, p4, p5, p6 };
	for (list<Person>::iterator it = l.begin(); it != l.end(); ++it) {
		cout << "姓名： " << it->m_Name << " 年龄： " << it->m_Age
			<< " 身高： " << it->m_Height << endl;
	}
	cout << endl;
	l.sort(cmpPerson);
	for (list<Person>::iterator it = l.begin(); it != l.end(); ++it) {
		cout << "姓名： " << it->m_Name << " 年龄： " << it->m_Age
			<< " 身高： " << it->m_Height << endl;
	}
}

int main(int argc, char* argv[]) {
	//test08_01();
	//test08_02();
	//test08_02_02();
	//test08_03();
	//test08_04();
	//test08_05();
	//test08_06();
	test08_07();
	// system("pause");
	return EXIT_SUCCESS;
}
