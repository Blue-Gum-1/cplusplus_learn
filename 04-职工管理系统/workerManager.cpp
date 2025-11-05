#include "workerManager.h"

WorkerManager::WorkerManager() {
	// 1. 文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in); // 读文件
	if (!ifs.is_open()) {
		// 初始化属性
		this->m_EmpNum = 0;
		this->m_EmpArray = null;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	// 2. 文件存在, 但数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof()) { // C++中判断文件是否为空: 只读取一个字符, 若这个字符是EOF说明是空 (ifstream调用eof函数)
		// 文件中的内容为空
		// 初始化属性
		this->m_EmpNum = 0;
		this->m_EmpArray = null;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	// 3. 文件存在, 并且记录有数据
	int num = get_EmpNum();
	this->m_EmpNum = num;

	this->m_EmpArray = new Worker * [this->m_EmpNum];
	this->init_Emp(); // 读取文件中的数据, 存到数组中

	/*for (int i = 0; i < this->m_EmpNum; ++i) {
		cout << "编号:" << this->m_EmpArray[i]->m_Id
			<< ", 姓名: " << this->m_EmpArray[i]->m_Name
			<< ", 部门: " << this->m_EmpArray[i]->getDeptName() << endl;
	}*/
}

void WorkerManager::Show_Menu() {
	cout << "********************************************" << endl;
	cout << "*********  欢迎使用职工管理系统！ **********" << endl;
	cout << "*************  0.退出管理程序  *************" << endl;
	cout << "*************  1.增加职工信息  *************" << endl;
	cout << "*************  2.显示职工信息  *************" << endl;
	cout << "*************  3.删除离职职工  *************" << endl;
	cout << "*************  4.修改职工信息  *************" << endl;
	cout << "*************  5.查找职工信息  *************" << endl;
	cout << "*************  6.按照编号排序  *************" << endl;
	cout << "*************  7.清空所有文档  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

// 退出系统
void WorkerManager::ExitSystem() {
	cout << "欢迎下次使用" << endl;
	exit(0); // 退出程序
}

// 添加职工
void WorkerManager::Add_Emp() {
	cout << "请输入添加职工的数量: " << endl;

	int addNum = 0;
	cin >> addNum;

	if (addNum > 0) {
		int newSize = this->m_EmpNum + addNum;

		Worker** newSpace = new Worker* [newSize];
		if (this->m_EmpArray != null) {
			for (int i = 0; i < this->m_EmpNum; ++i)
				newSpace[i] = this->m_EmpArray[i];
		}

		for (int i = 0; i < addNum; ++i) {
			int id;
			string name;
			int dSelect;

			cout << "请输入第" << i + 1 << "个新员工的编号: " << endl;
			cin >> id;
			cout << "请输入第" << i + 1 << "个新员工的姓名: " << endl;
			cin >> name;
			cout << "请选择该职工岗位: " << endl;
			cout << "1. 普通员工" << endl;
			cout << "2. 经理" << endl;
			cout << "3. 老板" << endl;
			cin >> dSelect;

			Worker* worker = this->get_Worker(id, name, dSelect);
			newSpace[this->m_EmpNum + i] = worker;
		}

		// 释放原有空间
		delete[] this->m_EmpArray;

		// 更改新空间指向
		this->m_EmpArray = newSpace;
		this->m_EmpNum = newSize;
		this->m_FileIsEmpty = false;

		// 成功添加后保存数据到文件中
		this->save();

		cout << "成功添加" << addNum << "名新职工" << endl;
	} 
	else cout << "输入数据有误" << endl;

	// 按任意键清屏, 回到上一级目录
	system("pause");
	system("cls");
}

// 保存文件
void WorkerManager::save() {
	ofstream ofs;
	ofs.open(FILENAME, ios::out); // 用输出的方式打开文件 - 写文件

	// 将每个人的数据写入到文件中
	for (int i = 0; i < this->m_EmpNum; ++i) {
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}

	// 关闭文件
	ofs.close();
}

// 统计文件中人数
int WorkerManager::get_EmpNum() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id, dId;
	string name;

	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId) {
		num++; // 统计文件中的人数
	}
	return num;
}

// 初始化员工
void WorkerManager::init_Emp() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id, dId;
	string name;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId) {
		Worker* worker = this->get_Worker(id, name, dId);
		this->m_EmpArray[index++] = worker;
	}

	ifs.close();
}

// 显示职工
void WorkerManager::Show_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或记录为空!" << endl;
	} else {
		for (int i = 0; i < this->m_EmpNum; ++i) {
			this->m_EmpArray[i]->showInfo();
		}
	}

	// 按任意键清屏
	system("pause");
	system("cls");
}

// 删除职工
void WorkerManager::Del_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或记录为空!" << endl;
	} else {
		cout << "请输入需要删除职工的编号:" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);
		if (index != -1) {
			for (int i = index + 1; i < this->m_EmpNum; ++i)
				this->m_EmpArray[i - 1] = this->m_EmpArray[i];

			--this->m_EmpNum;
			if (this->m_EmpNum == 0) {
				this->m_FileIsEmpty = true;
			}
			this->save();
			cout << "删除成功" << endl;
		} else {
			cout << "删除失败, 未找到该职工" << endl;
		}
	}

	system("pause");
	system("cls");
}

// 修改职工信息
void WorkerManager::Mod_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或记录为空!" << endl;
	} else {
		cout << "请输入修改职工的编号:" << endl;
		int id;
		cin >> id;

		int res = this->IsExist(id);
		if (res != -1) {
			this->m_EmpArray[res]->showInfo();

			delete this->m_EmpArray[res];
			int newId = 0;
			string newName = "";
			int dSelect = 0;
			cout << "查找到编号为 " << id << " 的职工, 请输入新的职工号:" << endl;
			cin >> newId;
			cout << "请输入新姓名:" << endl;
			cin >> newName;
			cout << "请输入岗位:" << endl;
			cout << "1. 普通职工" << endl;
			cout << "2. 经理" << endl;
			cout << "3. 老板" << endl;
			cin >> dSelect;

			Worker* worker = this->get_Worker(newId, newName, dSelect);
			this->m_EmpArray[res] = worker;
			this->save();
			cout << "修改成功!" << endl;
		} else {
			cout << "修改失败, 查无此人!" << endl;
		}

		system("pause");
		system("cls");
	}
}

// 查找职工
void WorkerManager::Find_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或记录为空!" << endl;
	} else {
		cout << "请输入查找的方法:" << endl;
		cout << "1. 按照职工的编号" << endl;
		cout << "2. 按照职工的姓名" << endl;
		int select = 0;
		cin >> select;
		if (select == 1) {
			// 编号
			int id;
			cout << "请输入查找职工的编号:" << endl;
			cin >> id;

			int res = this->IsExist(id);
			if (res != -1) {
				cout << "查找成功! 该职工的信息如下:" << endl;
				this->m_EmpArray[res]->showInfo();
			} else {
				cout << "查找失败, 查无此人!" << endl;
			}
		} else if (select == 2) {
			// 姓名
			string name;
			cout << "请输入查找职工的姓名:" << endl;
			cin >> name;

			bool flag = false;
			for (int i = 0; i < this->m_EmpNum; ++i) {
				if (this->m_EmpArray[i]->m_Name == name) {
					cout << "查找成功! 该职工的信息如下:" << endl;
					this->m_EmpArray[i]->showInfo();
					flag = true;
				}
			}
			if (!flag) cout << "查找失败, 查无此人!" << endl;
		} else {
			cout << "输入的选项有误!" << endl;
		}
	}
	system("pause");
	system("cls");
}

// 排序职工
void WorkerManager::Sort_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或记录为空!" << endl;
		system("pause");
		system("cls");
	} else {
		cout << "请选择排序方式:" << endl;
		cout << "1. 按职工号进行升序" << endl;
		cout << "2. 按职工号进行降序" << endl;

		int select = 0;
		cin >> select;

		for(int i = 0; i < this->m_EmpNum; ++i) {
			int index = i;
			for (int j = i + 1; j < this->m_EmpNum; ++j) {
				if (select == 1) { // 升序
					if (this->m_EmpArray[index]->m_Id > this->m_EmpArray[j]->m_Id)
						index = j;
				} else { // 降序
					if (this->m_EmpArray[index]->m_Id < this->m_EmpArray[j]->m_Id)
						index = j;
				}
			}
			if (index != i) {
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[index];
				this->m_EmpArray[index] = temp;
			}
		}
		cout << "排序成功,排序后结果为：" << endl;
		this->save();
		this->Show_Emp();
	}
}

// 清空文件
void WorkerManager::Clean_File() {
	cout << "确认清空?" << endl;
	cout << "1. 确认" << endl;
	cout << "2. 返回" << endl;

	int select = 0;
	cin >> select;
	if (select == 1) {
		// 打开模式 ios::trunc => 如果文件存在, 则删除文件重新创建
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();

		if (!this->m_FileIsEmpty) {
			for (int i = 0; i < this->m_EmpNum; ++i) {
				if (this->m_EmpArray[i] != null) {
					delete this->m_EmpArray[i];
				}
			}
			this->m_EmpNum = 0;
			delete this->m_EmpArray;
			this->m_EmpArray = null;
			this->m_FileIsEmpty = true;
		}
		cout << "清空成功!" << endl;
	}

	system("pause");
	system("cls");
}

// 判断职工是否存在: 如果存在, 返回职工所在数组中的位置, 否则返回-1
int WorkerManager::IsExist(int id) {
	for (int i = 0; i < this->m_EmpNum; ++i)
		if (this->m_EmpArray[i]->m_Id == id)
			return i;

	return -1;
}

Worker* WorkerManager::get_Worker(int id, string name, int dId) {
	Worker* worker = null;
	switch (dId) {
	case 1:
		worker = new Employee(id, name, dId);
		break;
	case 2:
		worker = new Manager(id, name, dId);
		break;
	default:
		worker = new Boss(id, name, dId);
		break;
	}
	return worker;
}

WorkerManager::~WorkerManager() {
	if (this->m_EmpArray != null) {
		delete[] this->m_EmpArray;
		this->m_EmpArray = null;
	}
}
