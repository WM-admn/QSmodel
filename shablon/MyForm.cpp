#include "MyForm.h"
using namespace System;
using namespace Windows::Forms;
[STAThread]
void main(array<String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	shablon::MyForm form;
	Application::Run(%form);
}
