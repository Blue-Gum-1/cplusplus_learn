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

// sort
void test20_01() {
	vector<int> v{ 1, 2, 5, 6, 7, 4, 9, 3 };
	repit(it, v) cout << *it << " "; cout << endl;

	sort(v.begin(), v.end(), greater<int>());
	repit(it, v) cout << *it << " "; cout << endl;
}

// random_shuffle
void test20_02() {
	vector<int> v{ 1, 2, 5, 6, 7, 4, 9, 3 };
	repit(it, v) cout << *it << " "; cout << endl;

	random_shuffle(v.begin(), v.end());
	repit(it, v) cout << *it << " "; cout << endl;
}

// merge
void test20_03() {
	vector<int> v1{ 1, 3, 5, 7, 9 }, v2{ 2, 4, 6, 8 };

	vector<int> vTarget(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	repit(it, vTarget) cout << *it << " "; cout << endl;
}

// reverse
void test20_04() {
	vector<int> v{ 1, 2, 3, 5, 4 };
	cout << "翻转前:" << endl;
	repit(it, v) cout << *it << " "; cout << endl; // 1 2 3 5 4

	cout << "翻转后:" << endl;
	reverse(v.begin(), v.end());
	repit(it, v) cout << *it << " "; cout << endl; // 4 5 3 2 1
}

int main020(int argc, char* argv[]) {
	//test20_01();
	//test20_02();
	//test20_03();
	test20_04();
	// system("pause");
	return EXIT_SUCCESS;
}
