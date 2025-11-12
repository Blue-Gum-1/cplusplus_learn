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
    模板不是万能的, 有些特定的数据类型, 需要用具体化方式做特殊实现
*/

class Person {
public:
    Person(string name, int age) {
        m_Name = name;
        m_Age = age;
    }
    string m_Name;
    int m_Age;
};

// 对比两个数据是否相等
template<class T>
bool myCompare(T& a, T& b) {
    return a == b;
}

// 利用具体化Person的版本实现代码, 具体化会优先调用
template<> bool myCompare(Person& p1, Person& p2) {
    return p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age;
}

int main(int argc, char* argv[]) {
    int a = 10, b = 20;
    cout << myCompare(a, b) << endl;
    
    Person p1("tom", 10), p2("tom", 10);
    cout << myCompare(p1, p2) << endl;
    return EXIT_SUCCESS;
}
