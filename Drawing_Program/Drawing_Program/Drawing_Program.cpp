// Drawing_Program.cpp: главный файл проекта.

#include "stdafx.h"
#include "Form1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Включение визуальных эффектов Windows XP до создания каких-либо элементов управления
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Создание главного окна и его запуск
	//Application::Run(gcnew Form1());
	Drawing_program::Drawing_program form;
	Application::Run(%form);
	return 0;
}
