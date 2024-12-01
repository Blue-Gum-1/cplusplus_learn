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
#define PI 3.14
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

/*

*/

class Circle {
public:
    int m_r;
    double calculateZC() {
        return 2 * PI * m_r;
    }
};

int main012_01(int argc, char* argv[])
{
    Circle c;
    c.m_r = 10;
    debug(Ô²µÄÖÜ³¤, c.calculateZC());

    system("pause");
    return EXIT_SUCCESS;
}
