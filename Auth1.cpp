/*
{*****************************}
{ Модуль Auth1.cpp    }
{ гр. П23                     }
{ Разработчик: Самусёнок А.С    }
{ Модифицирован: 13 июня 2025 }
{-----------------------------}
{ Модуль окна авторизации     }
{*****************************}
*/

#include "Auth1.h"
#include "adminUI.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(cli::array<String^> ^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Krsv::Auth form;
	Application::Run(% form);
}

