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

#include "person.hpp"

typedef pair<int, int> PII;
typedef long long ll;

/*
    1. vector容器存放内置数据类型
    2. vector容器中存放最定义数据类型
    3. vector容器存放自定义数据类型的指针
    4. vector容器嵌套vector容器
*/

template<class T>
void myPrint(const T& p) {
    cout << p << endl;
}

// 1. vector容器存放内置数据类型
void test01_01() {
    // 创建一个vector容器
    vector<int> v;

    // 向容器中插入数据
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);

    // 通过迭代器访问容器中的数据
    vector<int>::iterator itBegin = v.begin(); // 起始迭代器: 指向容器中的第一个元素
    vector<int>::iterator itEnd = v.end(); // 结束迭代器: 指向容器中最后一个元素的下一个位置

    // 遍历方式1
    while (itBegin != itEnd) {
        cout << *itBegin << endl;
        itBegin++;
    }
    cout("------------------");

    // 遍历方式2
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << endl;
    cout("------------------");

    // 遍历方式3: STL提供的for_each遍历算法, 需要引入 algorithm 标准算法头文件
    for_each(v.begin(), v.end(), myPrint<int>);
}

// 2. vector容器中存放最定义数据类型
void test01_02() {
    vector<Person> v; // Person: m_Name, m_Age
    v.push_back(Person("tom", 200));
    v.push_back(Person("herry", 300));
    v.push_back(Person("john", 150));

    for_each(v.begin(), v.end(), myPrint<Person>);
}

// 3. vector容器存放自定义数据类型的指针
void test01_03() {
    vector<Person*> v(3);

    Person p1("tom", 200);
    Person p2("herry", 300);
    Person p3("john", 150);

    v[0] = &p1, v[1] = &p2, v[2] = &p3;
    for (vector<Person*>::iterator it = v.begin(); it != v.end(); ++it)
        cout << "姓名: " << (*(*it)).m_Name << ", 年龄: " << (*it)->m_Age << endl;
}

// 4. vector容器嵌套vector容器
void test01_04() {
    vector<vector<int>> v;

    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    rep(i, 1, 3) v1.push_back(i), v2.push_back(i + 3), v3.push_back(i + 6);
    v.push_back(v1), v.push_back(v2), v.push_back(v3);

    for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); ++it)
        for_each((*it).begin(), (*it).end(), myPrint<int>);
}

int main001(int argc, char* argv[]) {
    test01_01();
    test01_02();
    test01_03();
    test01_04();
    // system("pause");
    return EXIT_SUCCESS;
}
