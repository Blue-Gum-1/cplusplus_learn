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
    1. �޲�main����: int main(void) <==> int main()
    2. ����main����: int main(int argc, char *argv[]) <==> int main(int argc, char **argv)
        1) ����1 argc: ��ʾ�� main �������ݵĲ������ܸ���
        2) ����2 argv: ��һ������! �����ÿһ��Ԫ�ض��� 'char *' ����(�ַ���)
    3. �Դ���main��������:
        1) ��ʽ1 (������): ���� "word", "hello world"
            - gcc xxx.cpp -o xxx.exe
            - xxx.exe word1 "hello world"
        2) ��ʽ2 (�޸�VS): ���� "word", "hello world"
            - �Ҽ���Ŀ -> ���� -> ���� -> ������� -> ���� word1 "hello world" -> ȷ��
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
