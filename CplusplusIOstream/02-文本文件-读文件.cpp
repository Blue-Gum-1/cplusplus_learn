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
void test_02_01() {
    ifstream ifs;
    ifs.open("test.txt", ios::in);
    if (!ifs.is_open()) { // 判断文件是否打开成功
        cout("文件打开失败");
        return;
    }

    // 读取方式1
    // char buf[1024] = { 0 }; while (ifs >> buf) cout(buf);

    // 读取方式2
    // char buf[1024] = { 0 }; while (ifs.getline(buf, sizeof(buf))) cout(buf);

    // 读取方式3
    // string buf; while (getline(ifs, buf)) cout(buf);

    // 读取方式4
    char c; while ((c = ifs.get()) != EOF) cout << c;

    ifs.close();
}

int main02(int argc, char* argv[])
{
    test_02_01();

    // system("pause");
    return EXIT_SUCCESS;
}
