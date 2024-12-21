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
class AnimalClass {
public:
    virtual void speak() = 0;
    // virtual ~AnimalClass() { } // 虚析构
    virtual ~AnimalClass() = 0; // 纯虚析构1
};
AnimalClass::~AnimalClass() { } // 纯虚析构2
class CatClass : public AnimalClass {
public:
    CatClass(string name) { cout("调用catClass的构造函数"); m_Name = new string(name); }
    void speak() { cout << *m_Name << " 小猫在说话" << endl; }
    ~CatClass() { cout("调用catClass的析构函数"); if (m_Name != null) delete m_Name, m_Name = null; }
    string* m_Name;
};

void test_014_05_01() {
    AnimalClass* animal = new CatClass("tom");
    animal->speak();
    delete animal;
}

int main014_05(int argc, char* argv[])
{
    test_014_05_01();

    // system("pause");
    return EXIT_SUCCESS;
}
