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
    char m_Name[64];
    int m_Age;
};
void test_04_01() {
    ifstream ifs;
    ifs.open("person.txt", ios::binary | ios::in);
    if (!ifs.is_open()) {
        cout("文件打开失败");
        return;
    }

    Person p;
    ifs.read((char*)&p, sizeof(Person));
    debug(姓名, p.m_Name);
    debug(年龄, p.m_Age);

    ifs.close();
}

int main(int argc, char* argv[]) {
    test_04_01();

    // system("pause");
    return EXIT_SUCCESS;
}
