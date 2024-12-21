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
public: virtual void speek() { cout("动物说话..."); }
};
class Cat : public Animal {
public: void speek() { cout("猫在喵喵叫..."); }
};
class Dog : public Animal {
public: void speek() { cout("狗在汪汪叫..."); }
};

// 地址早绑定, 在编译阶段就确定地址
// 在父类的speek方法前加virtual关键字, 此时speek成为虚函数, 从而实现子类中的speek函数地址晚绑定
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
