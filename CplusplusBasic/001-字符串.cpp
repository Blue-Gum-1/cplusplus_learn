#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
#define null NULL
using namespace std;

typedef pair<int, int> PII;

/*
	1. char* gets(char* s): ��ȡһ���ַ���, �浽s��
		��: char s[10]; gets(s); // gets_s(s);
	2. char* fgets(char* s, int size, FILE *stream): ��ȡ�ļ��е�һ���ַ���
		��Ԥ�� '\0' �Ĵ洢�ռ�, �ռ��㹻���ȡ '\n' ����� '\0', �ռ䲻������ '\n'
			��char s[10]
				size=6��ȡ'hello' -> 'hello\0'
				size=6��ȡ'word'  -> 'word\n\0'
		��: char s[10]; fgets(s, sizeof(s), stdin); // stdin: ��׼������(����)
	3. int puts(const char* s): ���һ���ַ���, �Զ�����
		����ֵ: �ɹ����� �Ǹ���, ʧ�ܷ��� -1
	4. int fputs(const char* str, FILE* stream): ���һ���ַ�����stream��, ������
		����ֵ: �ɹ����� �Ǹ���, ʧ�ܷ��� -1
		��: fputs("hello world", stdout); // stdout: ��׼�����(��Ļ)
	5. �ַ�����������
		-- size_t: unsigned __int64
		1) size_t strlen(const char* s); // ����
		2) int strcmp(const char *str1, const char *str2); // �Ƚ�: �Ƚ��ַ��� str1 �� str2 ��С
		3) int strncmp(const char *str1, const char *str2, size_t n); // �Ƚ�: �Ƚ��ַ��� str1 �� str2 ǰ n λ�Ĵ�С
		4) char* strcpy(char *dist, const char *source); // ����(����ȫ): �� source �ַ��������� dist, ������ dist
		5) char* strncpy(char *dist, const char *src, size_t n); // ����(��ȫ): �� src �ַ���ǰ n λ������ dist, ������ dist
		6) char* strcat(char *dist, const char* src); // ƴ��: �� src �ַ���ƴ�ӵ� dist �ַ�����
		7) char* strncat(char *dist, const char* src, size_t n); // ƴ��: �� src �ַ���ǰnλƴ�ӵ� dist �ַ�����
		8) const char* strchr(const char *str, int val); // ����: ���� ASCII ��ֵΪ val ���ַ��� str �г��ֵ��׵�ַ
		9) const char* strrchr(const char *str, int val); // ����: ���� ASCII ��ֵΪ val ���ַ��� str �������ֵ��׵�ַ
	   10) const char* strstr(const char *str, const char *substr); // ����: ���� substr �� str �г��ֵ�λ��, �����ڷ��� NULL
	   11) char* strtok(char *str, const char *delimiter); // ���: ���ݸ����ķָ��� delimiter ����ַ��� str
				- str: ����ֵ��ַ���, �� NULL ��ʾ�Զ���ѯ��һ�ν�ȡ��ʣ����ַ���
				- delimiter: �ָ�����ɵ� "�ָ���", �� ",./" ��ʾ���� ',' �� '.' �� '/' ���ַ������в��
				- ����: ���� str �в��ҵ��ĵ�һ���ָ����滻Ϊ '\0', �����ز�ֺ���׵�ַ
				- ��ע: �ڶ��μ��Ժ��str���ʱ, ����1 ���� NULL ����, ���Զ���ѯ��һ�ν�ȡ��ʣ����ַ���
					- ��s[] = "hello,world,test"; strtok(s, ","); strtok(NULL, ",");
					- �ڶ��λ��Զ���ѯ�� "world,test", Ҳ���� 'w' ���ڵĵ�ַ
	   12) int atoi(const char *str); // �ַ��� --> int
	   13) double atof(const char *str); // �ַ��� --> double
	   14) long atol(const char *str); // �ַ��� --> long
	6. �ַ�������:
		- char str1[] = "hello"; // ==> str1[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
		- char *str2 = "hello"; // "hello" ��һ���ַ�������, �����޸�
*/
int main001() {
	//PII p = make_pair(1, 1);
	//p = { 1, 2 };
	//m[p] = 2;
	//printf("pair<%d, %d> = %d\n", p.first, p.second, m[p]);

	// ����
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
		while (t != null) { // ���һ�β�ַ��� NULL
			puts(t);
			t = strtok(null, ","); // �ڶ����Լ�֮����ʱ, ��1 ����NULL, ���Զ���ѯ
		}

		char r[] = "www.baidu.com$This is a strtok|test";
		t = strtok(r, ".$| "); // ���ַ�����'.'��'$'��'|'��' '���
		while (t != null) {
			puts(t);
			t = strtok(null, ".$| "); // �ڶ����Լ�֮����ʱ, ��1 ����NULL, ���Զ���ѯ��һ�ν�ȡ����ַ���
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
