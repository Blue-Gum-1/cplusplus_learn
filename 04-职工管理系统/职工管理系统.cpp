#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
#include "workerManager.h"

#include "worker.h"
#include "employee.h"

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

int main(int argc, char* argv[]) {
	WorkerManager wm;

	int choice = 0;
	while (true) {
		wm.Show_Menu();
		cout("请输入您的选择: ");
		cin >> choice;

		switch (choice) {
		case 0: // 退出系统
			wm.ExitSystem();
			break;
		case 1: // 增加职工
			wm.Add_Emp();
			break;
		case 2: // 显示职工
			wm.Show_Emp();
			break;
		case 3: // 删除职工
			wm.Del_Emp();
			break;
		case 4: // 修改职工
			wm.Mod_Emp();
			break;
		case 5: // 查找职工
			wm.Find_Emp();
			break;
		case 6: // 排序职工
			wm.Sort_Emp();
			break;
		case 7: // 清空职工
			wm.Clean_File();
			break;
		default: 
			system("cls"); // 清屏
			break;
		}
	}

	// system("pause");
	return EXIT_SUCCESS;
}
