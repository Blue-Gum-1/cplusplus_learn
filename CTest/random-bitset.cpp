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

int mainRandomAndBitset(int argc, char* argv[])
{
    default_random_engine e;
    uniform_int_distribution<int> u(0, 1);
    e.seed(time(0));

    bitset<3> b = 0;
    int zff = 0, ffz = 0, n = 1e6;
    while (n--) {
        bool v = true;
        b = 0;
        rep(i, 1, 2) b <<= 1, b[0] = u(e);
        while (v) {
            b <<= 1, b[0] = u(e);
            if (b == 4) v = false, zff++;
            if (b == 1) v = false, ffz++;
        }
    }
    printf("zff = %d, ffz = %d\n", zff, ffz);

    system("pause");
    return EXIT_SUCCESS;
}
