#pragma once // 防止头文件重复包含
#include <iostream>
#include <fstream>
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
using namespace std;

#define null NULL
#define endl "\n"
#define FILENAME "empFile.txt"

class WorkerManager {
public:
	WorkerManager();

	// 展示菜单
	void Show_Menu();

	// 退出系统
	void ExitSystem();

	// 添加职工
	void Add_Emp();

	// 保存文件
	void save();

	// 统计文件中人数
	int get_EmpNum();

	// 初始化员工
	void init_Emp();

	// 显示职工
	void Show_Emp();

	// 删除职工
	void Del_Emp();

	// 判断职工是否存在: 如果存在, 返回职工所在数组中的位置, 否则返回-1
	int IsExist(int id);

	// 修改职工信息
	void Mod_Emp();

	// 查找职工
	void Find_Emp();

	// 排序职工
	void Sort_Emp();

	// 清空文件
	void Clean_File();

	Worker* get_Worker(int id, string name, int dId);

	// 析构函数
	~WorkerManager();

	// 判断文件是否为空标记
	bool m_FileIsEmpty;
	// 记录职工人数
	int m_EmpNum;
	// 职工数组指针
	Worker** m_EmpArray;
};