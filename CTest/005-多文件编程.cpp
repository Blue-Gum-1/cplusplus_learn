#include "test.h"
using namespace std;

typedef pair<int, int> PII;
typedef long long ll;

int add_num(int a, int b); // ���������� 'add.cpp' �ļ���

/*
    1. ���ļ����: ��������в�ͬ�������ܵ� '.cpp' �ļ�ģ��, ���뵽һ��, ����һ�� '.exe' �ļ�
        main���������ļ����� '.cpp'�ļ�ģ�� �еĺ���
            ��ʽ1: ��add_num, ������main���������ļ�, ��������'add.cpp'�ļ���
            ��ʽ2: ��del_num, ������'test.h'ͷ�ļ���, main���������ļ�#include "test.h", ��������'add.cpp'�ļ���
    2. ͷ�ļ�: 1) ϵͳ��ͷ�ļ�, ��stdio.h, ����ʱʹ�� '<>' 2) �Զ���ͷ�ļ�, ��test.h, ����ʱʹ�� '""'(˫����)
        (1) ��ֹͷ�ļ��ظ�����(ͷ�ļ�����)
            ��ʽ1: ��һ��д #pragma once // windows��
            ��ʽ2(��test.h): #ifndef XXX_H
                             #define XXX_H
                                ... // ͷ�ļ�����
                             #endif
        (2) ͷ�ļ�����: 1) includeͷ�ļ�; 2) ��������; 3) ���Ͷ���; 4) �궨��;

*/
int main005()
{
    int a = 1, b = 2;
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", add_num(a, b));
    printf("a - b = %d\n", del_num(a, b));
    system("pause");
    return EXIT_SUCCESS;
}
