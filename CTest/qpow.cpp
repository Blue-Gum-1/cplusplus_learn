#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
#define x first
#define y second
#define null NULL
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

// ¿ìËÙÃÝ
int qpow(ll a, ll b, int p) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % p;
        a = a * a % p; b >>= 1;
    }
    return res;
}

int mainQpow()
{

    system("pause");
    return EXIT_SUCCESS;
}
