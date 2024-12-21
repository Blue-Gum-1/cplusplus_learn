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
    virtual void Boil() = 0; // ÖóË®
    virtual void Brew() = 0; // ³åÅÝ
    virtual void PourInCup() = 0; // µ¼Èë±­ÖÐ
    virtual void PutSomething() = 0; // ¼ÓÈë¸¨ÁÏ
    void MakeDrink() { Boil(); Brew(); PourInCup(); PutSomething(); }
};
class Coffee : public AbstractDrinking {
    void Boil() { cout("ÖóÅ©·òÉ½Èª"); }
    void Brew() { cout("³åÅÝ¿§·È"); }
    void PourInCup() { cout("µ¼Èë¿§·È±­"); }
    void PutSomething() { cout("¼ÓÈëÅ£ÄÌ"); }
};
class Tea : public AbstractDrinking {
    void Boil() { cout("Öó¿óÈªË®"); }
    void Brew() { cout("³åÅÝ²èÒ¶"); }
    void PourInCup() { cout("µ¼Èë²£Á§±­"); }
    void PutSomething() { cout("¼ÓÈëèÛè½"); }
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
