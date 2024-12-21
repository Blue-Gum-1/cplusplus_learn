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

class BasePage {
public:
    string header = "头部导航", footer = "底部信息栏", left = "左侧菜单栏";
};
class Java : public BasePage {
public:
    string content = "Java课程";
};
class Python : public BasePage {
public:
    string content = "Python课程";
};

class BaseClass {
public:
    BaseClass() { m_A = 100; }
    void func() { cout("调用BaseClass - func()"); }
    void func(int a) { cout("调用BaseClass - func(int a)"); }
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class SonClass : public BaseClass {
public:
    SonClass() { m_A = 200; }
    void func() { cout("调用SonClass - func()"); }
    int m_A;
};

void test_013_01_01() {
    debug(sizeof(SonClass), sizeof(SonClass));
}

void test_013_01_02() {
    SonClass s;
    debug("SonClass下的m_A", s.m_A);
    debug("BaseClass下的m_A", s.BaseClass::m_A);
}

void test_013_01_03() {
    SonClass s;
    s.func(); s.BaseClass::func();
    // s.func(1); // 报错: 当子类与父类拥有同名的成员函数, 子类会隐藏父类中所有版本的同名成员函数
    s.BaseClass::func(1);
}

int main013_01(int argc, char* argv[])
{
    test_013_01_03();

    system("pause");
    return EXIT_SUCCESS;
}
