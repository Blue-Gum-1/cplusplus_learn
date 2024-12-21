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
class AbstractDrinking {
public:
    virtual void Boil() = 0; // ��ˮ
    virtual void Brew() = 0; // ����
    virtual void PourInCup() = 0; // ���뱭��
    virtual void PutSomething() = 0; // ���븨��
    void MakeDrink() { Boil(); Brew(); PourInCup(); PutSomething(); }
};
class Coffee : public AbstractDrinking {
    void Boil() { cout("��ũ��ɽȪ"); }
    void Brew() { cout("���ݿ���"); }
    void PourInCup() { cout("���뿧�ȱ�"); }
    void PutSomething() { cout("����ţ��"); }
};
class Tea : public AbstractDrinking {
    void Boil() { cout("���Ȫˮ"); }
    void Brew() { cout("���ݲ�Ҷ"); }
    void PourInCup() { cout("���벣����"); }
    void PutSomething() { cout("�������"); }
};
void doWork(AbstractDrinking* abs) {
    abs->MakeDrink();
    delete abs;
}

void test_014_04_01() {
    doWork(new Coffee());
    doWork(new Tea());
}

int main014_04(int argc, char* argv[])
{
    test_014_04_01();

    system("pause");
    return EXIT_SUCCESS;
}
