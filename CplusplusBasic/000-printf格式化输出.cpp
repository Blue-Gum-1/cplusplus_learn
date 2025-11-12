#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
#define x first
#define y second
#define null NULL
#define endl "\n"
#define rep(i, m, n) for (int i = (m); i <= (n); ++i)
#define rrep(i, m, n) for (int i = (m); i >= (n); --i)
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

/*
    int sscanf(const char *str, const char *format, ...);
        - 对应scanf, 将原来从屏幕获取的 "格式化字符串", 从str中获取
        - 如: sscanf("10+20=30", "%d+%d=%d", &a, &b, &c); ==> a=10, b=20, c=30
    int sprintf(char *str, const char *format, ...);
        - 对应printf, 将原来写到屏幕的 "格式化字符串" 写到参数str中
        - 如: sprintf(str, "%d + %d = %d\n", a, b, c); ==> str = 10 + 20 = 30

    int: %d             short: %hd              long: %ld               long long: %lld
    unsigned int: %u    unsigned short: %hu     unsigned long: %lu      unsigned long long: %llu
    char: %c            char*: %s               float: %f               double: %lf

    %m.n: 占用m位(整数、小数点、小数), 保留n位小数
    %0m.nf: 浮点数, 占用m位, 保留n位小数, 不足m位用0填充
    %0s: 输出N位字符, 不足N位用0左填充
    %Ns: 输出N位字符, 不足N位用空格左填充
    %-Ns: 输出N位字符, 不足N位用空格右填充

    unsigned int(八进制): %o
    unsigned int(十六进制): %x / %X
    double(科学计数法格式): %e / %E

    void*(16进制输出指针): %p

    二进制: 0b / 0B, 如 0b1001001
    八进制: 0, 如 01234567
    十六进制: 0x / 0X, 如 0x7fffffff
    输出百分号: %%
*/

int main000()
{

    double x = 1.25f;
    printf("%07.1lf\n", x); // 1.25 -> 00001.2, 1.26 -> 00001.3

    int a = 1;
    printf("%03d\n", a); // 001

    int maxInt = INT_MAX;
    printf("%x\n", maxInt);

    {
        int a, b, c;
        sscanf("10+20=30", "%d+%d=%d", &a, &b, &c);
        printf("%d, %d, %d\n", a, b, c);
    }

    char str[] = "abc";
    printf("%05s\n", str);

    system("pause");
    return EXIT_SUCCESS;
}