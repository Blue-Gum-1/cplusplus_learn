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
class CPU {
public:
    virtual void calculate() = 0;
};
class VideoCard { // �Կ�
public:
    virtual void display() = 0;
};
class Memory { // �ڴ���
public:
    virtual void storage() = 0;
};
class InterCpu : public CPU {
public:
    void calculate() { cout("Inter���̵�CPU��ʼ������"); }
};
class LenovoCpu : public CPU {
public:
    void calculate() { cout("Lenovo���̵�CPU��ʼ������"); }
};
class InterVideoCard : public VideoCard {
public:
    void display() { cout("Inter���̵��Կ���ʾ����"); }
};
class LenovoVideoCard : public VideoCard {
public:
    void display() { cout("Lenovo���̵��Կ���ʾ����"); }
};
class InterMemory : public Memory {
public:
    void storage() { cout("Inter���̵��ڴ������д洢"); }
};
class LenovoMemory : public Memory {
public:
    void storage() { cout("Lenovo���̵��ڴ������д洢"); }
};
class Computer {
public:
    CPU* m_Cpu; VideoCard* m_VideoCard; Memory* m_Memory;
    Computer(CPU* cpu, VideoCard* videoCard, Memory* memory) {
        m_Cpu = cpu, m_VideoCard = videoCard, m_Memory = memory;
    }
    void doWork() { m_Cpu->calculate(); m_VideoCard->display(); m_Memory->storage(); }
    ~Computer() {
        if (m_Cpu != null) delete m_Cpu, m_Cpu = null;
        if (m_VideoCard != null) delete m_VideoCard, m_VideoCard = null;
        if (m_Memory != null) delete m_Memory, m_Memory = null;
    }
};

void test_014_06_01() {
    Computer* c = new Computer(new InterCpu, new InterVideoCard, new LenovoMemory);
    c->doWork(); delete c;
}

int main014_06(int argc, char* argv[])
{
    test_014_06_01();

    // system("pause");
    return EXIT_SUCCESS;
}
