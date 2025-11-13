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

template<class NameType, class AgeType>
class Person {
public:
    Person(NameType name, AgeType age) {
        this->m_Name = name;
        this->m_Age = age;
    }
    void showPerson() {
        cout << "name = " << this->m_Name << ", age = " << this->m_Age << endl;
    }
    NameType m_Name;
    AgeType m_Age;
};

int main007(int argc, char* argv[]) {
    Person<string, int> p("tom", 18);
    p.showPerson();
    // system("pause");
    return EXIT_SUCCESS;
}
