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
    类模板对象做函数参数
        1. 指定传入类型
        2. 参数模板化
        3. 整个类模板化
*/

template<class T1, class T2>
class Person {
public:
    Person(T1 name, T2 age) {
        this->m_Name = name;
        this->m_Age = age;
    }
    void showPerson() {
        cout << "name = " << this->m_Name << ", age = " << this->m_Age << endl;
    }
    T1 m_Name;
    T2 m_Age;
};

// 1. 指定传入类型
void printPerson1(Person<string, int>& p) {
    p.showPerson();
}

// 2. 参数模板化
template<class T1, class T2>
void printPerson2(Person<T1, T2>& p) {
    p.showPerson();
    cout << "T1的类型为 " << typeid(T1).name() << endl;
    cout << "T2的类型为 " << typeid(T2).name() << endl;
}

// 3. 整个类模板化
template<class T>
void printPerson3(T& p) {
    p.showPerson();
}

int main010(int argc, char* argv[]) {
    Person<string, int> p("孙悟空", 2000);
    printPerson1(p);
    printPerson2(p);
    printPerson3(p);

    // system("pause");
    return EXIT_SUCCESS;
}
