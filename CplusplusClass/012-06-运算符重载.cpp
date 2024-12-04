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
class Person {
public:
    int m_A, m_B;
    /*Person operator+(const Person& p) {
        Person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }*/

    // 成员函数 实现不了 "cout << p", "p << cout" 不是我们想要的效果
    ostream& operator<<(ostream& out) {
        out << "m_A = " << this->m_A << ", m_B = " << this->m_B;
        return out;
    }
};
Person operator+(Person& p1, Person& p2) {
    Person temp;
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}

Person operator+(const Person& p1, const int& a) {
    Person temp;
    temp.m_A = p1.m_A + a;
    temp.m_B = p1.m_B + a;
    return temp;
}

ostream& operator<<(ostream& out, const Person& p) {
    out << "m_A = " << p.m_A << ", m_B = " << p.m_B;
    return out;
}

void test_012_06_01() {
    Person p1, p2;
    p1.m_A = p1.m_B = p2.m_A = p2.m_B = 10;
    Person p3 = p1 + p2;
    debug(p3, p3);
    Person p4 = p1 + 20;
    debug(p4, p4);
}

int main(int argc, char* argv[])
{
    test_012_06_01();

    system("pause");
    return EXIT_SUCCESS;
}
