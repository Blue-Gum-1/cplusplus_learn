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

#include "mydata.hpp"

typedef pair<int, int> PII;
typedef long long ll;

/*

*/

void printVector(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		cout << *it << " ";
	cout << endl;
}

// 构造函数
void test03_01() {
	vector<int> v1;
	rep(i, 1, 10) v1.push_back(i);
	printVector(v1);

	vector<int> v2(v1.begin(), v1.end());
	printVector(v2);

	vector<int> v3(10, 100);
	printVector(v3);

	vector<int> v4(v1);
	printVector(v4);
}

// 赋值操作
void test03_02() {
	vector<int> v1;
	rep(i, 1, 10) v1.push_back(i);

	vector<int> v2;
	v2 = v1;
	printVector(v2);

	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	vector<int> v4;
	v4.assign(10, 100);
	printVector(v4);
}

// 容量和大小
void test03_03() {
	vector<int> v1;
	rep(i, 1, 10) v1.push_back(i);
	printVector(v1);

	cout << "v1为空: " << v1.empty() << endl; // false
	cout << "v1的容量为: " << v1.capacity() << endl; // 13
	cout << "v1的大小为: " << v1.size() << endl; // 10

	v1.resize(15, 10);
	cout << "v1的容量为: " << v1.capacity() << endl; // 19
	cout << "v1的大小为: " << v1.size() << endl; // 15
	printVector(v1);

	v1.resize(5);
	cout << "v1的容量为: " << v1.capacity() << endl; // 10
	cout << "v1的大小为: " << v1.size() << endl; // 5
	printVector(v1);
}

// 测试移动构造: 将时间复杂度由深拷贝的 O(size) 降低到 O(1)
void test03_03_02() {
	MyData d1 = createData(); // 移动构造
	MyData d2 = d1; // 拷贝构造
	cout << d2.size << endl; // 1000000
	MyData d3 = std::move(d2); // 移动构造
	cout << d2.size << endl; // 0
	MyData d4 = MyData(10000); // 移动构造
}

// 插入和删除
void test03_04() {
	vector<int> v;
	// 尾插
	rep(i, 1, 10) v.push_back(i); printVector(v);
	// 尾删
	v.pop_back(); printVector(v);
	// 插入
	v.insert(v.begin() + 5, 100); printVector(v);
	v.insert(v.begin(), 2, 100); printVector(v);
	// 删除
	v.erase(v.begin() + 5); printVector(v);
	// 清空
	v.clear(); printVector(v);
}

// 数据存取
void test03_05() {
	vector<int> v;
	rep(i, 1, 10) v.push_back(i);

	cout << "v[2] = " << v[2] << endl;
	cout << "v.at(2) = " << v.at(2) << endl;
	cout << "v.front() = " << v.front() << endl;
	cout << "v.back() = " << v.back() << endl;
}

// 互换容器
void test03_06() {
	vector<int> v1, v2;
	rep(i, 1, 10) v1.push_back(i), v2.push_back(10 - i);
	v2.insert(v2.begin(), 10);
	printVector(v1); // 1 2 3 4 5 6 7 8 9 10
	printVector(v2); // 10 9 8 7 6 5 4 3 2 1 0
	v1.swap(v2);
	printVector(v1); // 10 9 8 7 6 5 4 3 2 1 0
	printVector(v2); // 1 2 3 4 5 6 7 8 9 10
}
void test03_06_02() {
	vector<int> v;
	rep(i, 1, 1e6) v.push_back(i);
	cout << "v的容量为：" << v.capacity() << endl; // 1049869
	cout << "v的大小为：" << v.size() << endl; // 1000000
	v.resize(3);
	cout << "v的容量为：" << v.capacity() << endl; // 1049869
	cout << "v的大小为：" << v.size() << endl; // 3
	//收缩内存
	vector<int>(v).swap(v); //匿名对象
	cout << "v的容量为：" << v.capacity() << endl; // 3
	cout << "v的大小为：" << v.size() << endl; // 3
}

// 预留空间
void test03_07() {
	vector<int> v;

	//预留空间
	v.reserve(100000);

	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
		if (p != &v[0]) p = &v[0], num++;
	}

	cout << "num:" << num << endl; // 1
}

int main003(int argc, char* argv[]) {
	//test03_01();
	//test03_02();
	//test03_03();
	//test03_03_02();
	//test03_04();
	//test03_05();
	//test03_06();
	//test03_06_02();
	test03_07();
	// system("pause");
	return EXIT_SUCCESS;
}
