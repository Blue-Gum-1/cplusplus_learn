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

void test15_01() {
	multiplies<int> mul; cout << "3 * 4 = " << mul(3, 4) << endl; // 12
	negate<double> neg; cout << "3.14È¡·´Îª " << neg(3.14) << endl; // -3.14
}

int main015(int argc, char* argv[]) {
	test15_01();
	// system("pause");
	return EXIT_SUCCESS;
}
