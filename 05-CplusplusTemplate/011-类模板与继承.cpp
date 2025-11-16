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

template<class T>
class Base { T m; };

//class Son: public Base // 报错: C++编译需要给子类分配内存, 必须知道父类中T的类型才可以向下继承
class Son : public Base<int> { // 必须指定一个类型
};

// 类模板继承类模板, 可以用 T2 指定父类中的T类型
template<class T1, class T2>
class Son2 : public Base<T2> {
public:
    Son2() {
        cout(typeid(T1).name());
        cout(typeid(T2).name());
    }
};

int main011(int argc, char* argv[]) {

    // system("pause");
    return EXIT_SUCCESS;
}
