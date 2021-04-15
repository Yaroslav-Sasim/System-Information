
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include<TCHAR.H>

using namespace std;
int main()
{
	setlocale(LC_ALL,"ru");
	TCHAR Compname[20];
	DWORD namesize = 20;
	cout << endl << endl << "Имя пользователя:" << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	if (GetComputerName(Compname, &namesize))
		wcout << "\t" << "Name - " << Compname << endl;
	else
	cout << "\t" << "Имя компа - ошибка!!!" << endl << endl;
	cout << "\t" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "Дисковые устройства:" << endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;                                                                                                                                                                                                     cout << "C: D:" << endl;
	SYSTEM_INFO lpSystemInfo;
	GetSystemInfo(&lpSystemInfo);
	
	cout << endl << endl << "Система:  " << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	{
		cout << "\t" << lpSystemInfo.dwPageSize << " - Размер страницы" << endl;
		cout << "\t" << lpSystemInfo.dwAllocationGranularity << " -Детализация распределения" << endl;
		cout << "\t" << lpSystemInfo.dwNumberOfProcessors << " - Номер процессора" << endl;
		cout << "\t" << lpSystemInfo.dwOemId << " - ID" << endl;
		cout << "\t" << lpSystemInfo.dwProcessorType << " - тип процессора" << endl;
		cout << "\t" << lpSystemInfo.lpMaximumApplicationAddress << " - Максимальный адрес" << endl;
		cout << "\t" << lpSystemInfo.lpMinimumApplicationAddress << " - минимальный адрес" << endl;
		cout << "\t" << lpSystemInfo.wProcessorArchitecture << " - Архитектура процессора" << endl << endl;

		wcout << endl;
		TCHAR dir[30];
		if (GetWindowsDirectory(dir, 30) == 1)
			wcout << "Ошибка!" << endl;
		else
			wcout << "Директория Windows = " << dir << endl;


		
			

	}
	system("pause");
}