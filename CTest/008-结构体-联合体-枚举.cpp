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
    1. ������, Ҳ�й�����
        1. �������ڲ����г�Ա������ʼ��ַһ��, ��ͬ������������ĵ�ַ
        2. ������Ĵ�С: ���ڲ���Ա������, �����Ǹ���Ա�����Ĵ�С(����)
            ��: union test { char ch; short sh; int var; }; ��СΪint��4
        3. �޸���������һ����Ա������ֵ, ������Ա����Ҳ����֮�޸�
*/

struct Person {
    string name;
    int age;
};

union test_union {
    char ch;
    short sh;
    int var = 0;
};

enum color { red, green, blue, black = 10, pink, yellow };

void printPerson(const Person* const p) {
    cout << "person.name = " << p->name << ", person.age = " << p->age << endl;
}

int main008(int argc, char* argv[])
{
    // �ṹ��
    Person p = { "tom", 20 };
    printf("sizeof(Person) = %d\n", sizeof(Person)); // 32
    cout << "person.name = " << p.name << ", person.age = " << p.age << endl;

    // �ṹ��ָ��
    Person* s = &p;
    s->name = "jerry", s->age = 30;
    cout << "person.name = " << p.name << ", person.age = " << p.age << endl;

    printPerson(s);

    // ������-������
    test_union obj;
    printf("obj.ch = %p, obj.sh = %p. obj.var = %p\n", &obj.ch, &obj.sh, &obj.var);
    printf("sizeof(test_union) = %d\n", sizeof(test_union));
    obj.ch = 'A';
    printf("obj.ch = %c, obj.sh = %hd. obj.var = %d\n", obj.ch, obj.sh, obj.var);
    obj.sh = 100;
    printf("obj.ch = %c, obj.sh = %hd. obj.var = %d\n", obj.ch, obj.sh, obj.var);
    obj.var = 0x7654321;
    printf("obj.ch = %c, obj.sh = %hd. obj.var = %d\n", obj.ch, obj.sh, obj.var);


    // ö��
    int flag = 12;
    if (flag == yellow) cout("yellow is 12");
    else cout("yellow is not 12");
    system("pause");
    return EXIT_SUCCESS;
}
