// Drawing_Program.cpp: ������� ���� �������.

#include "stdafx.h"
#include "Form1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	//Application::Run(gcnew Form1());
	Drawing_program::Drawing_program form;
	Application::Run(%form);
	return 0;
}
