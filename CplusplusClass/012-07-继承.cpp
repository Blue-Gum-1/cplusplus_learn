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
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class SonClass : public BaseClass {
public:
    int m_D;
};

void test_012_07_01() {
    debug(sizeof(SonClass), sizeof(SonClass));
}

int main(int argc, char* argv[])
{
    test_012_07_01();

    system("pause");
    return EXIT_SUCCESS;
}
