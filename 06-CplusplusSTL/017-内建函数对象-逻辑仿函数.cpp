#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
#define x first
#define y second
#define null NULL
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
#define repit(it, m) for (auto it = (m.begin()); it != (m.end()); ++it)
#define debug(n, m) cout << #n << " = " << (m) << endl
#define cout(n) cout << n << endl
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

/*

*/

void test17_01() {
	vector<bool> v{ true, false, true, true, false };
	repit(it, v) cout << *it << " "; cout << endl; // 1 0 1 1 0

	// 利用逻辑非, 将容器v搬运到容器v2中, 并执行取反操作
	vector<bool> v2(v.size());
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	repit(it, v2) cout << *it << " "; cout << endl; // 0 1 0 0 1
}

int main017(int argc, char* argv[]) {
	test17_01();
	// system("pause");
	return EXIT_SUCCESS;
}
