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
void test_03_01() {
    ofstream ofs;
    ofs.open("person.txt", ios::out | ios::binary);
    Person p = { "уехЩ", 18 };
    ofs.write((const char*)&p, sizeof(p));
    ofs.close();
}

int main03(int argc, char* argv[]) {
    test_03_01();

    // system("pause");
    return EXIT_SUCCESS;
}
