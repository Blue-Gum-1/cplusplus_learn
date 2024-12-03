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
    int m_A;
    mutable int m_B;
    // this指针: 本质是一个常量指针, 指针的指向是不可以修改的
    void showPerson() const {
        // this->m_A = 100; // 报错
        this->m_B = 200;
    }
};

void test_012_04_01() {
    const Person p;
    p.showPerson();
    // p.m_A = 20; // 报错
    p.m_B = 50;
}

int main(int argc, char* argv[])
{

    system("pause");
    return EXIT_SUCCESS;
}
