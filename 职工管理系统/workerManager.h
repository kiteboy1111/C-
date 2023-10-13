#pragma once 
#include<iostream>
#include "worker.h"
#include"boss.h"
#include "employee.h"
#include"manager.h"
#include<fstream>
#define FILENAME "empFile.txt"

using namespace std;

class WorkerManager {
public:

	WorkerManager();

	void Show_Menu();

	void exitSystem();

	int m_EmpNum;

	Worker** m_EmpArray;

	void Add_Emp();

	void save();

	bool m_FileIsEmpty;

	int getEmpNum();

	void init_Emp();

	void Show_Emp();

	void Del_Emp();

	int InExist(int id);

	void ModEmp();

	void Find_Emp();

	void Sort_Emp();

	void Clean_File();

	~WorkerManager();
};

