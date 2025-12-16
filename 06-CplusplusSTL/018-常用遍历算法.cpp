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

// for_each
void print01(int val) { cout << val << " "; }
class print02 {
public:
	void operator()(int val) { cout << val << " "; }
};
void test18_01() {
	vector<int> v{ 1, 2, 4, 5, 3 };
	for_each(v.begin(), v.end(), print01); cout << endl;
	for_each(v.begin(), v.end(), print02()); cout << endl;
}

// transform
class TransForm {
public:
	int operator()(int val) { return val; }
};
void test18_02() {
	vector<int> v1{ 1, 2, 3, 4, 5 };
	vector<int> v2(v1.size()); // 目标容器, 器需要提前开辟空间
	transform(v1.begin(), v1.end(), v2.begin(), TransForm());
	for_each(v2.begin(), v2.end(), print02()); cout << endl;
}

int main018(int argc, char* argv[]) {
	//test18_01();
	test18_02();
	// system("pause");
	return EXIT_SUCCESS;
}
