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
class Building;

class GoodGay {
    Building* building;
public:
    GoodGay();
    void visit();
    void showBuild();
};

class Building { // 建筑物类
    friend void goodGay(Building* building); // 全局函数做友元
    // friend class GoodGay;
    friend void GoodGay::showBuild();
private:
    string m_BedRoom; // 卧室
public:
    string m_SittingRoom; // 客厅
    Building() { m_SittingRoom = "客厅", m_BedRoom = "卧室"; }
};

void goodGay(Building* building) {
    debug(好基友全局函数 正在访问, building->m_SittingRoom);
    debug(好基友全局函数 正在访问, building->m_BedRoom);
}

GoodGay::GoodGay() { building = new Building; }
void GoodGay::visit() { // 访问Building中的属性
    debug(好基友类 正在访问, building->m_SittingRoom);
    // debug(好基友类 正在访问, building->m_BedRoom);
}
void GoodGay::showBuild() {
    debug(好基友类中的成员函数 正在访问, building->m_SittingRoom);
    debug(好基友类中的成员函数 正在访问, building->m_BedRoom);
}

void test_012_05_01() {
    Building building;
    goodGay(&building);
    GoodGay goodGay;
    goodGay.visit();
}

int main012_05(int argc, char* argv[])
{
    test_012_05_01();

    system("pause");
    return EXIT_SUCCESS;
}
