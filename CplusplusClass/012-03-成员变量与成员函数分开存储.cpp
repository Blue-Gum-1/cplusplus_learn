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
class Person_03 {
    int m_A; // 非静态成员变量: 属于类的对象上
    static int m_B; // 静态成员变量: 不属于类的对象

    int func_01(); // 非静态成员函数: 不属于类的对象
    void static func_02(); // 静态成员函数: 不属于类的对象
};
int Person_03::m_B = 10;

void test_012_03_01() {
    Person_03 p;
    /*
        空对象占用空间为1
        C++编译器会给每个空对象的分配一个字节空间, 是为了区分空对象占内存的位置
        每个空对象也应该有一个独一无二的内存地址
    */
    debug(sizeof p, sizeof(p)); 
}

void test_012_03_02() {
    Person_03 p;
    
    debug(sizeof p, sizeof(p));
    debug(sizeof Person, sizeof(Person_03));
}

int main(int argc, char* argv[])
{
    // test_012_03_01();

    test_012_03_02();

    system("pause");
    return EXIT_SUCCESS;
}
