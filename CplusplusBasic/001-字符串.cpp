#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
#define null NULL
using namespace std;

typedef pair<int, int> PII;

/*
	1. char* gets(char* s): 读取一行字符串, 存到s中
		例: char s[10]; gets(s); // gets_s(s);
	2. char* fgets(char* s, int size, FILE *stream): 读取文件中的一行字符串
		会预留 '\0' 的存储空间, 空间足够会读取 '\n' 在添加 '\0', 空间不足舍弃 '\n'
			如char s[10]
				size=6读取'hello' -> 'hello\0'
				size=6读取'word'  -> 'word\n\0'
		例: char s[10]; fgets(s, sizeof(s), stdin); // stdin: 标准输入流(键盘)
	3. int puts(const char* s): 输出一个字符串, 自动换行
		返回值: 成功返回 非负数, 失败返回 -1
	4. int fputs(const char* str, FILE* stream): 输出一行字符串到stream中, 不换行
		返回值: 成功返回 非负数, 失败返回 -1
		例: fputs("hello world", stdout); // stdout: 标准输出流(屏幕)
	5. 字符串常见函数
		-- size_t: unsigned __int64
		1) size_t strlen(const char* s); // 长度
		2) int strcmp(const char *str1, const char *str2); // 比较: 比较字符串 str1 和 str2 大小
		3) int strncmp(const char *str1, const char *str2, size_t n); // 比较: 比较字符串 str1 和 str2 前 n 位的大小
		4) char* strcpy(char *dist, const char *source); // 拷贝(不安全): 将 source 字符串拷贝到 dist, 并返回 dist
		5) char* strncpy(char *dist, const char *src, size_t n); // 拷贝(安全): 将 src 字符串前 n 位拷贝到 dist, 并返回 dist
		6) char* strcat(char *dist, const char* src); // 拼接: 将 src 字符串拼接到 dist 字符串后
		7) char* strncat(char *dist, const char* src, size_t n); // 拼接: 将 src 字符串前n位拼接到 dist 字符串后
		8) const char* strchr(const char *str, int val); // 查找: 查找 ASCII 码值为 val 的字符在 str 中出现的首地址
		9) const char* strrchr(const char *str, int val); // 查找: 查找 ASCII 码值为 val 的字符在 str 中最后出现的首地址
	   10) const char* strstr(const char *str, const char *substr); // 查找: 查找 substr 在 str 中出现的位置, 不存在返回 NULL
	   11) char* strtok(char *str, const char *delimiter); // 拆分: 根据给定的分隔符 delimiter 拆分字符串 str
				- str: 被拆分的字符串, 传 NULL 表示自动查询上一次截取后剩余的字符串
				- delimiter: 分隔符组成的 "分隔串", 如 ",./" 表示按照 ',' 或 '.' 或 '/' 对字符串进行拆分
				- 本质: 将在 str 中查找到的第一个分隔符替换为 '\0', 并返回拆分后的首地址
				- 备注: 第二次及以后对str拆分时, 参数1 传递 NULL 即可, 会自动查询上一次截取后剩余的字符串
					- 如s[] = "hello,world,test"; strtok(s, ","); strtok(NULL, ",");
					- 第二次会自动查询到 "world,test", 也就是 'w' 所在的地址
	   12) int atoi(const char *str); // 字符串 --> int
	   13) double atof(const char *str); // 字符串 --> double
	   14) long atol(const char *str); // 字符串 --> long
	6. 字符串常量:
		- char str1[] = "hello"; // ==> str1[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
		- char *str2 = "hello"; // "hello" 是一个字符串常量, 不可修改
*/
int main001() {
	//PII p = make_pair(1, 1);
	//p = { 1, 2 };
	//m[p] = 2;
	//printf("pair<%d, %d> = %d\n", p.first, p.second, m[p]);

	// 测试
	//char s[100];
	//gets_s(s);
	//puts(s);

	//scanf("%[^\n]s", s);
	//printf("%s\n", s);

	//char s[10];
	//fgets(s, 6, stdin);
	//int len = strlen(s);
	//printf("%s-------%d\n", s, len);

	printf("hello world!\n");

	{
		const char* s = strstr("str", "aa");
		printf("%s\n", s);
		printf("%d\n", s == null);
	}

	// strtok
	{
		char s[] = "hello,world,test";
		char* t = strtok(s, ",");
		while (t != null) { // 最后一次拆分返回 NULL
			puts(t);
			t = strtok(null, ","); // 第二次以及之后拆分时, 参1 传入NULL, 会自动查询
		}

		char r[] = "www.baidu.com$This is a strtok|test";
		t = strtok(r, ".$| "); // 将字符串按'.'或'$'或'|'或' '拆分
		while (t != null) {
			puts(t);
			t = strtok(null, ".$| "); // 第二次以及之后拆分时, 参1 传入NULL, 会自动查询上一次截取后的字符串
		}
	}

	{
		char s[] = "-3.14";
		int i = atoi(s);
		double f = atof(s);
		long l = atol(s);
		printf("i = %d, f = %.2lf, l = %ld\n", i, f, l);
	}

	system("pause");
	return EXIT_SUCCESS;
}
