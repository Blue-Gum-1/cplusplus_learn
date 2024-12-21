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
class AbstractBase {
public:
    virtual void func() = 0;
};
class SonTest : public AbstractBase {
public:
    void func() { }
};

void test_014_03_01() {
    
}

int main014_03(int argc, char* argv[])
{

    system("pause");
    return EXIT_SUCCESS;
}
