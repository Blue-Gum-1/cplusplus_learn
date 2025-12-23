#define _CRT_SECURE_NO_WARNINGS 1
#include <bits/stdc++.h>
using namespace std;

#include "globalFile.h"
#include "student.h"
#include "teacher.h"
#include "manager.h"

typedef pair<int, int> PII;
typedef long long ll;

/*

*/

// 进入管理员的子菜单
void managerMenu(Identity*& manager) {
	while (true) {
		manager->operMenu();

		Manager* man = (Manager*)manager;
		int select = 0;
		cin >> select;
		if (select == 1) { //添加账号
			cout << "添加账号" << endl;
			man->addPerson();
		} else if (select == 2) { //查看账号
			cout << "查看账号" << endl;
			man->showPerson();
		} else if (select == 3) { //查看机房
			cout << "查看机房" << endl;
			man->showComputer();
		} else if (select == 4) { //清空预约
			cout << "清空预约" << endl;
			man->cleanFile();
		} else {
			delete manager;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}

// 进入学生的子菜单
void studentMenu(Identity*& student) {
	while (true) {
		//学生菜单
		student->operMenu();

		Student* stu = (Student*)student;
		int select = 0;
		cin >> select;
		if (select == 1) stu->applyOrder(); // 申请预约
		else if (select == 2) stu->showMyOrder(); // 查看自身预约
		else if (select == 3) stu->showAllOrder(); // 查看所有预约
		else if (select == 4) stu->cancelOrder(); // 取消预约
		else {
			delete student;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}

// fileName: 操作的文件名, type: 登录的身份(1 学生, 2 老师, 3 管理员)
void LoginIn(string fileName, int type) {
	Identity* person = null;
	ifstream ifs;
	ifs.open(fileName, ios::in);

	if (!ifs.is_open()) {
		cout << fileName << " 不存在" << endl;
		ifs.close();
		return;
	}

	int id, fId;
	string name, pwd, fName, fPwd;
	if (type == 1) { // 学生
		cout << "请输入你的学号" << endl;
		cin >> id;
	} else if (type == 2) { // 老师
		cout << "请输入你的职工号" << endl;
		cin >> id;
	}

	cout << "请输入用户名：" << endl;
	cin >> name;

	cout << "请输入密码： " << endl;
	cin >> pwd;
	if (type == 1) {
		//学生登录验证
		while (ifs >> fId && ifs >> fName && ifs >> fPwd) {
			cout << fId << " " << fName << " " << fPwd << endl;
			if (id == fId && name == fName && pwd == fPwd) {
				cout << "学生验证登录成功!" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				studentMenu(person);
				return;
			}
		}
	} else if (type == 2) {
		//教师登录验证
		while (ifs >> fId && ifs >> fName && ifs >> fPwd) {
			if (id == fId && name == fName && pwd == fPwd) {
				cout << "教师验证登录成功!" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				return;
			}
		}
	} else if (type == 3) {
		//管理员登录验证
		while (ifs >> fName && ifs >> fPwd) {
			if (name == fName && pwd == fPwd) {
				cout << "验证登录成功!" << endl;
				//登录成功后，按任意键进入管理员界面
				system("pause");
				system("cls");
				//创建管理员对象
				person = new Manager(name, pwd);
				managerMenu(person);
				return;
			}
		}
	}

	cout << "验证登录失败!" << endl;
	system("pause");
	system("cls");
	return;
}

void test01() {
	int select = 0;
	while (true) {
		cout << "======================  欢迎来到传智播客机房预约系统  =====================" << endl;
		cout << endl << "请输入您的身份" << endl;
		cout << "\t\t -------------------------------\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          1.学生代表           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          2.老    师           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          3.管 理 员           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          0.退    出           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t -------------------------------\n";
		cout << "输入您的选择: ";

		cin >> select; //接受用户选择
		switch (select) {
		case 1:  //学生身份
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2:  //老师身份
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3:  //管理员身份
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0:  //退出系统
			cout << "欢迎下一次使用" << endl;
			system("pause");
			return;
			break;
		default:
			cout << "输入有误，请重新选择！" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}

int main(int argc, char* argv[]) {
	test01();
	// system("pause");
	return EXIT_SUCCESS;
}
