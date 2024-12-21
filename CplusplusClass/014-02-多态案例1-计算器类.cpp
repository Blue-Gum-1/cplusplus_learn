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

class Calculator {
public:
    int getResult(string op) {
        if (op == "+") return m_Num1 + m_Num2;
        if (op == "-") return m_Num1 - m_Num2;
        if (op == "*") return m_Num1 * m_Num2;
        if (op == "/") return m_Num1 / m_Num2;
    }
    int m_Num1, m_Num2;
};

// 计算器抽象类
class AbstractCalculator {
public:
    virtual int getresult() { return 0; }

    int m_Num1, m_Num2;
};
class AddCalculator : public AbstractCalculator { // 加法计算器类
public:
    int getresult() { return m_Num1 + m_Num2; }
};
class SubCalculator : public AbstractCalculator { // 减法计算器类
public:
    int getresult() { return m_Num1 - m_Num2; }
};
class MulCalculator : public AbstractCalculator { // 乘法计算器类
public:
    int getresult() { return m_Num1 * m_Num2; }
};

void test_014_02_01() {
    AbstractCalculator* ac = new AddCalculator;
    ac->m_Num1 = ac->m_Num2 = 10;
    debug(ac->getresult(), ac->getresult());
    delete ac;
    ac = new SubCalculator;
    ac->m_Num1 = ac->m_Num2 = 10;
    debug(ac->getresult(), ac->getresult());
    delete ac;
    ac = new MulCalculator;
    ac->m_Num1 = ac->m_Num2 = 10;
    debug(ac->getresult(), ac->getresult());
    delete ac;
}

int main014_02(int argc, char* argv[])
{
    test_014_02_01();

    system("pause");
    return EXIT_SUCCESS;
}
