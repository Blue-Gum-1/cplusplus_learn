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

class Person1 {
    string name;
    int age;
public:
    void showPerson() { cout << "name = " << this->name << ", age = " << this->age << endl; }
    Person1(int age) {
        cout("调用Person对象的带参构造函数");
        this->name = "tom";
        this->age = age;
    }
    Person1(const Person1& p) {
        cout("调用Person对象的拷贝构造函数");
        this->age = p.age;
    }
    ~Person1() { cout("调用Person对象的析构函数"); }
};

void test00001(Person1 p) {
    p.showPerson();
}

void test_person_012_02() {
    Person1 p1(20); // , p2(p1); p1.showPerson();
    test00001(p1);
}

int main(int argc, char* argv[])
{
    test_person_012_02();

    system("pause");
    return EXIT_SUCCESS;
}