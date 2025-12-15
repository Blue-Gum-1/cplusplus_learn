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
struct GreaterFive {
	bool operator()(int val) {
		return val > 5;
	}
};
void test13_01() {
	vector<int> v{ 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	auto it = find_if(v.begin(), v.end(), GreaterFive()); // auto -> vector<int>::iterator
	if (it == v.end()) cout << "Î´ÕÒµ½! ! !" << endl;
	else cout << "ÕÒµ½ÁË! " << *it << endl;
}

int main013(int argc, char* argv[]) {
	test13_01();
	// system("pause");
	return EXIT_SUCCESS;
}
