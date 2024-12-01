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
    static int m_A;
    int age = 10;
    static void func() {
        cout("调用static void func()");
        debug(m_A, m_A);
        // debug(age, age); // 编译器直接报错
    }
};
int Person::m_A = 200;

void test_person_012_02() {
    Person p;
    p.func();
    Person::func();
}

int main(int argc, char* argv[])
{
    test_person_012_02();

    system("pause");
    return EXIT_SUCCESS;
}