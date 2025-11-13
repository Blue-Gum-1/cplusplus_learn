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
    1. 类模板没有自动类型推导的使用方式
    2. 类模板在模板参数列表中可以有默认参数
*/

template<class NameType, class AgeType = int>
class Person {
public:
    Person(NameType name, AgeType age) {
        this->m_Name = name;
        this->m_Age = age;
    }
    NameType m_Name;
    AgeType m_Age;
};

int main008(int argc, char* argv[]) {
    //Person p("tom", 20) // 报错
    Person<string> p("tom", 20);
    // system("pause");
    return EXIT_SUCCESS;
}
