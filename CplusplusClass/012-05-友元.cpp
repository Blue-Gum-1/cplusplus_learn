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

class Building { // ��������
    friend void goodGay(Building* building); // ȫ�ֺ�������Ԫ
    // friend class GoodGay;
    friend void GoodGay::showBuild();
private:
    string m_BedRoom; // ����
public:
    string m_SittingRoom; // ����
    Building() { m_SittingRoom = "����", m_BedRoom = "����"; }
};

void goodGay(Building* building) {
    debug(�û���ȫ�ֺ��� ���ڷ���, building->m_SittingRoom);
    debug(�û���ȫ�ֺ��� ���ڷ���, building->m_BedRoom);
}

GoodGay::GoodGay() { building = new Building; }
void GoodGay::visit() { // ����Building�е�����
    debug(�û����� ���ڷ���, building->m_SittingRoom);
    // debug(�û����� ���ڷ���, building->m_BedRoom);
}
void GoodGay::showBuild() {
    debug(�û������еĳ�Ա���� ���ڷ���, building->m_SittingRoom);
    debug(�û������еĳ�Ա���� ���ڷ���, building->m_BedRoom);
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
