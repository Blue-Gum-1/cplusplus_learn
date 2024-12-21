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

class Animal {
public: virtual void speek() { cout("����˵��..."); }
};
class Cat : public Animal {
public: void speek() { cout("è��������..."); }
};
class Dog : public Animal {
public: void speek() { cout("����������..."); }
};

// ��ַ���, �ڱ���׶ξ�ȷ����ַ
// �ڸ����speek����ǰ��virtual�ؼ���, ��ʱspeek��Ϊ�麯��, �Ӷ�ʵ�������е�speek������ַ���
void doSpeek(Animal& animal) {
	animal.speek();
}

void test_014_01_01() {
	Cat c;
	Dog d;
	doSpeek(c);
	doSpeek(d);
}

int main014_01(int argc, char* argv[])
{
	test_014_01_01();

	system("pause");
	return EXIT_SUCCESS;
}
