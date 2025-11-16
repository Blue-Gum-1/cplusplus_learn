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

template<class T1, class T2>
class Person {
public:
    Person(T1, T2);
    void showPerson2();

    string m_Name;
    int m_Age;
};
// 构造函数 类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
    this->m_Name = name;
    this->m_Age = age;
}
// 成员函数 类外实现
template<class T1, class T2>
void Person<T1, T2>::showPerson2() {
    debug(姓名, this->m_Name);
    debug(年龄, this->m_Age);
}

int main012(int argc, char* argv[]) {
    Person<string, int> p("tom2", 180);
    p.showPerson2();
    // system("pause");
    return EXIT_SUCCESS;
}
