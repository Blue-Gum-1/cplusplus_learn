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

void test06_01() {
	stack<int> s;
	rep(i, 1, 10) s.push(i);

	while (!s.empty()) {
		int v = s.top(); s.pop();
		cout << "栈顶元素为: " << v << endl;
	}
	cout << "栈的大小为: " << s.size() << endl;
}

int main006(int argc, char* argv[]) {
	test06_01();
	// system("pause");
	return EXIT_SUCCESS;
}
