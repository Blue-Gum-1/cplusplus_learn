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
    类模板中成员函数的创建时机
        - 普通类中的成员函数一开始就可以创建
        - 类模板中的成员函数在调用时才创建
*/

class Person1 {
public:
    void showPerson1() {
        cout << "Person1 show" << endl;
    }
};

class Person2 {
public:
    void showPerson2() {
        cout << "Person2 show" << endl;
    }
};

template<class T>
class MyClass {
public:
    void fun1() {
        obj.showPerson1();
    }
    void fun2() {
        obj.showPerson2();
    }
    T obj;
};

int main009(int argc, char* argv[]) {
    MyClass<Person1> m;
    m.fun1();
    //m.fun2(); // 编译时会报错

    // system("pause");
    return EXIT_SUCCESS;
}
