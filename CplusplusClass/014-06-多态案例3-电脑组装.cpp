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
class VideoCard { // 显卡
public:
    virtual void display() = 0;
};
class Memory { // 内存条
public:
    virtual void storage() = 0;
};
class InterCpu : public CPU {
public:
    void calculate() { cout("Inter厂商的CPU开始运算了"); }
};
class LenovoCpu : public CPU {
public:
    void calculate() { cout("Lenovo厂商的CPU开始运算了"); }
};
class InterVideoCard : public VideoCard {
public:
    void display() { cout("Inter厂商的显卡显示内容"); }
};
class LenovoVideoCard : public VideoCard {
public:
    void display() { cout("Lenovo厂商的显卡显示内容"); }
};
class InterMemory : public Memory {
public:
    void storage() { cout("Inter厂商的内存条进行存储"); }
};
class LenovoMemory : public Memory {
public:
    void storage() { cout("Lenovo厂商的内存条进行存储"); }
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
