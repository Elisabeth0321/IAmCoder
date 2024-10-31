#include "MenuForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	IAmCoder::MenuForm formMain;
	Application::Run(% formMain);
	return 0;
}