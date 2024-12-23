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

void test_01_01() {
    ofstream ofs;
    ofs.open("test.txt", ios::out);
    ofs << "张三" << endl; 
    ofs << "李四" << endl;
    ofs << "王五" << endl;
    ofs.close();
}

int main01(int argc, char* argv[])
{
    test_01_01();

    system("pause");
    return EXIT_SUCCESS;
}
