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

#include "person.hpp"

typedef pair<int, int> PII;
typedef long long ll;

/*
    类模板分文件编写问题及解决
        1. 方式一: 直接引用 #include "person.cpp", 不需要引用 #include "person.h"
        2. 方式二: 将 .h 和 .cpp 写到同一个文件中, 并将 .h 后缀修改为 .hpp 进行引用
*/




int main013(int argc, char* argv[]) {
    Person<string, int> p("jerry", 200);
    p.showPerson3();

    // system("pause");
    return EXIT_SUCCESS;
}
