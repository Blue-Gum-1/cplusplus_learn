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

class Animal013 { public: int m_Age; };
class Sheep: virtual public Animal013 { }; // 羊
class Tuo : virtual public Animal013 { }; // 驼
class SheepTuo : public Sheep, public Tuo { }; // 羊驼

void test_013_02_01() {
    SheepTuo st;
    debug(sizeof(SheepTuo), sizeof(SheepTuo)); // 8
    st.Sheep::m_Age = 18;
    st.Tuo::m_Age = 28;
    // 当菱形继承(未使用虚继承时), 两个父类拥有相同成员, 需要加作用域进行区分
    debug(st.Sheep::m_Age, st.Sheep::m_Age);
    debug(st.Tuo::m_Age, st.Tuo::m_Age);
    debug(st.m_Age, st.m_Age);
}

int main013_02(int argc, char* argv[])
{
    test_013_02_01();

    system("pause");
    return EXIT_SUCCESS;
}
