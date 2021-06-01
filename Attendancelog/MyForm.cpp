#include "MyForm.h"
#include "Events.h"
#include "functions.h"
#include "getssets.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace Attendancelog;

[STAThreadAttribute]
int main(array < String^ >^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyForm form;
	Application::Run(% form);

	return 0;
}