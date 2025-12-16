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

// find
class MyClass {
public:
	MyClass(string name, int age) { m_Name = name; m_Age = age; }
	bool operator==(const MyClass& cls) { return m_Name == cls.m_Name && m_Age == cls.m_Age; }
	string m_Name;
	int m_Age;
};
void test19_01() {
	vector<MyClass> v;
	v.push_back(MyClass("jerry", 20));
	v.push_back(MyClass("tom", 18));
	auto pos = find(v.begin(), v.end(), MyClass("tom", 18));
	if (pos == v.end()) cout << "Î´ÕÒµ½! !" << endl;
	else cout << "ÕÒµ½ÁË! name = " << pos->m_Name << ", age = " << pos->m_Age << endl;
}

int main(int argc, char* argv[]) {
	test19_01();
	// system("pause");
	return EXIT_SUCCESS;
}
