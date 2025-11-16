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

// 提前让编译器知道Person类的存在
template<class T1, class T2>
class Person;

// 类外实现
template<class T1, class T2>
void printPerson2(const Person<T1, T2>&p) {
    debug(姓名, p.m_Name);
    debug(年龄, p.m_Age);
}

// 通过全局友元函数 打印Person的private信息
template<class T1, class T2>
class Person {
    // 全局友元函数 类内实现
    friend void printPerson1(const Person<T1, T2>& p) { // 类内实现
        debug(姓名, p.m_Name);
        debug(年龄, p.m_Age);
    }
    // 全局友元函数 类外实现
    // 1. 添加空模板参数列表
    friend void printPerson2<>(const Person<T1, T2>& p);
public:
    Person(T1 name, T2 age) {
        this->m_Name = name;
        this->m_Age = age;
    }
private:
    string m_Name;
    int m_Age;
};

int main014(int argc, char* argv[]) {
    Person<string, int> p("john", 300);
    printPerson1(p);
    printPerson2(p);
    // system("pause");
    return EXIT_SUCCESS;
}
