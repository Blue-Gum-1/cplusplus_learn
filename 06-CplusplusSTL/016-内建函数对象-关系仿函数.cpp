#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
#define x first
#define y second
#define null NULL
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
#define repit(i, m) for (auto i = (m.begin()); i != (m.end()); ++i)
#define debug(n, m) cout << #n << " = " << (m) << endl
#define cout(n) cout << n << endl
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

/*

*/

void test16_01() {
	vector<int> v{ 10, 30, 50, 40, 20 };
	repit(it, v) cout << *it << " "; cout << endl;

	sort(v.begin(), v.end(), greater<int>());
	repit(it, v) cout << *it << " "; cout << endl;
}

int main016(int argc, char* argv[]) {
	test16_01();
	// system("pause");
	return EXIT_SUCCESS;
}
