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
    1. 无参main函数: int main(void) <==> int main()
    2. 带参main函数: int main(int argc, char *argv[]) <==> int main(int argc, char **argv)
        1) 参数1 argc: 表示给 main 函数传递的参数的总个数
        2) 参数2 argv: 是一个数组! 数组的每一个元素都是 'char *' 类型(字符串)
    3. 对带参main函数传参:
        1) 方式1 (命令行): 传参 "word", "hello world"
            - gcc xxx.cpp -o xxx.exe
            - xxx.exe word1 "hello world"
        2) 方式2 (修改VS): 传参 "word", "hello world"
            - 右键项目 -> 属性 -> 调试 -> 命令参数 -> 输入 word1 "hello world" -> 确定
*/

int main007(int argc, char* argv[])
{
    for (size_t i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    system("pause");
    return EXIT_SUCCESS;
}
