#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char name[] = " ",year;
	cout << "������ ���� ���" << endl;
	cin >> name;
	cout << "�����"<<" "<< name << "!";
}