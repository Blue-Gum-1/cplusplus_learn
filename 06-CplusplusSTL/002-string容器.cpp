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
	1. 构造函数
		- string(); //创建一个空的字符串 例如: string str;
		- string(const char* s); //使用字符串s初始化
		- string(const string& str); //使用一个string对象初始化另一个string对象
		- string(int n, char c); //使用n个字符c初始化
	2. 赋值操作
		- string& operator=(const char* s); //char*类型字符串 赋值给当前的字符串
		- string& operator=(const string &s); //把字符串s赋给当前的字符串
		- string& operator=(char c); //字符赋值给当前的字符串
		- string& assign(const char *s); //把字符串s赋给当前的字符串
		- string& assign(const char *s, int n); //把字符串s的前n个字符赋给当前的字符串
		- string& assign(const string &s); //把字符串s赋给当前字符串
		- string& assign(int n, char c); //用n个字符c赋给当前字符串
	3. 字符串拼接
		- string& operator+=(const char* str); //重载+=操作符
		- string& operator+=(const char c); //重载+=操作符
		- string& operator+=(const string& str); //重载+=操作符
		- string& append(const char *s); //把字符串s连接到当前字符串结尾
		- string& append(const char *s, int n); //把字符串s的前n个字符连接到当前字符串结尾
		- string& append(const string &s); //同operator+=(const string& str)
		- string& append(const string &s, int pos, int n); //字符串s中从pos开始的n个字符连接到字符串结尾
	4. 查找与替换
		- int find(const string& str, int pos = 0) const;  //查找str第一次出现位置,从pos开始查找
		- int find(const char* s, int pos = 0) const;   //查找s第一次出现位置,从pos开始查找
		- int find(const char* s, int pos, int n) const; //从pos位置查找s的前n个字符第一次位置
		- int find(const char c, int pos = 0) const; //查找字符c第一次出现位置
		- int rfind(const string& str, int pos = npos) const;   //查找str最后一次位置,从pos开始查找
		- int rfind(const char* s, int pos = npos) const;  //查找s最后一次出现位置,从pos开始查找
		- int rfind(const char* s, int pos, int n) const;  //从pos查找s的前n个字符最后一次位置
		- int rfind(const char c, int pos = 0) const;  //查找字符c最后一次出现位置
		- string& replace(int pos, int n, const string& str);  //替换从pos开始n个字符为字符串str
		- string& replace(int pos, int n,const char* s); //替换从pos开始的n个字符为字符串s
*/

// 构造函数
void test02_01() {
	string s1;
	string s2("hello world");
	string s3(s2);
	string s4(3, 'a');

	cout << s1 << endl << s2 << endl << s3 << endl << s4 << endl;
}

// 赋值操作
void test02_02() {
	string s1;
	s1 = "hello world";
	string s2;
	s2 = s1;
	string s3;
	s3 = 'a';
	string s4;
	s4.assign("hello C++");
	string s5;
	s5.assign("hello C++", 5);
	string s6;
	s6.assign(s5);
	string s7;
	s7.assign(10, 'w');
}

// 字符串拼接
void test02_03() {
	string s1 = "我", s2 = " LOL CF";
	s1 += "爱玩游戏";
	s1 += ':';
	s1 += s2;
	
	string s3 = "I", s4 = "...!!!...";
	s3.append(" love ");
	s3.append("game asdasdq", 4);
	s3.append(s2);
	s3.append(s4, 3, 3);

	cout(s1); // 我爱玩游戏: LOL CF
	cout(s3); // I love game LOL CF!!!
}

// 查找
void test02_04() {
	string str1 = "abcdefgdefg";
	cout << str1.find("de") << endl; // 3, 下标
	cout << (int) str1.find("ac") << endl; // -1, 未找到
	cout << str1.rfind("de") << endl; // 7, 下标
}

// 替换
void test02_05() {
	string str1 = "abcdefg";
	cout << str1.replace(1, 3, "1111") << endl; // a1111efg
	cout << str1.replace(1, 3, str1) << endl; // aa1111efg1efg
	cout << str1 << endl; // aa1111efg1efg
}

void test02_06() {

}


int main(int argc, char* argv[]) {
	//test02_01();
	//test02_02();
	//test02_03();
	test02_04();
	test02_05();
	// system("pause");
	return EXIT_SUCCESS;
}
